#include <iostream>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/fstream.hpp>

using namespace std;
using namespace boost;
namespace fs = boost::filesystem;

int main(int argc, char *argv[])
{
  if(argc < 2){
    cerr << "require : directory path to create" << endl;
    return 1;
  }
  string pt = argv[1];
  fs::path path = complete(fs::path(pt, fs::native));
  int res = fs::create_directory(path);
  cout << res << endl;
  return 0;
}
