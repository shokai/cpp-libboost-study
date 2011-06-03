#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <vector>

using namespace std;
using namespace boost;

int main(int argc, char* argv[]){
  vector<any> v;
  v.push_back(15);
  v.push_back(string("test"));
  v.push_back((char*)"hello");
  v.push_back(3.1415926535897932);

  for(int i=0; i < v.size(); i++){
    any a = v[i];
    if(a.type() == typeid(int)) cout << "int: " << any_cast<int>(a) << endl;
    else if(a.type() == typeid(double)) cout << "double: " << any_cast<double>(a) << endl;
    else if(a.type() == typeid(string)) cout << "string: " << any_cast<string>(a) << endl;
    else if(a.type() == typeid(char*)) cout << "char*: " << any_cast<char*>(a) << endl;
    cout << a.type().name() << endl;
  }

  return 0;
}
