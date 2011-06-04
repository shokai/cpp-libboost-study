#include <iostream>
#include <string>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

int main(int argc, char* argv[]){
  string str = "asdf\"jjjjj\"hog'ehoge";
  cout << str << endl;
  
  string result = regex_replace(str, regex("[s\"\']"), "\\\\$0"); // $0でmatchした対象が取れる
  cout << result << endl;
  return 0;
}
