#include <iostream>
#include <boost/regex.hpp>
#include <string>
using namespace std;


int main(int argc, int *argv[]){
  boost::regex reg_exp;
  string str_reg;
  string str;
  string replace;
  string result;
  
  cout << "input Regular Expression ->";
  getline(cin, str_reg);
  reg_exp = str_reg;
  cout << "input Replace word ->";
  getline(cin, replace);
  
  while(true){
    cout << "input Result word ->";
    getline(cin, str);
    result = boost::regex_replace(str, reg_exp, replace, boost::format_no_copy);
    cout << result << endl;
  }
  
  return 0;
    
}
