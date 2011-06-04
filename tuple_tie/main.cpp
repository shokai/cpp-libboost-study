#include <iostream>
#include <string>
#include <boost/tuple/tuple.hpp>

using namespace std;
using namespace boost;

// 多値を返す
tuple<int, double, string> test_func(){
  return make_tuple(15, 3.14, "hello work");
}

int main(int argc, char* argv[]){
  int a;
  double b;
  string message;
  tie(a,b,message) = test_func();

  cout << a << endl;
  cout << b << endl;
  cout << message << endl;

  return 0;
}
