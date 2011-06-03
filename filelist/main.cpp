#include <iostream>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/fstream.hpp>

using namespace std;
using namespace boost;
namespace fs = boost::filesystem;

int main(void)
{
  string pt = "/Users/sho/";
  fs::path path = complete(fs::path(pt, fs::native));
  fs::directory_iterator end;
  for (fs::directory_iterator i(path); i!=end; i++){
    string name = pt + i->leaf();
    cout << name << endl;
  }
  return 0;
}
