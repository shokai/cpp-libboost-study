#include <iostream>
#include <boost/regex.hpp>
#include <string>
using namespace std;
using namespace boost;

int main(int argc, char* argv[]){
  string str = "asdftesthogehoge";

  if(regex_match(str, regex(".*t.st.*"))){
    cout << "match" << endl;
  }
  else{
    cout << "not match" << endl;
  }
  return 0;
  
}
