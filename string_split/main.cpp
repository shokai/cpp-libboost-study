#include <iostream>
#include <vector>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost::algorithm;

int main()
{
  string s = "a,b.c,as/df";
  vector<string> results;
  split(results, s, boost::is_any_of(",./"));

  cout << "要素数: " << results.size() << endl;
  for (int i = 0; i < results.size(); i++){
    cout << results[i] << endl;
  }
}
