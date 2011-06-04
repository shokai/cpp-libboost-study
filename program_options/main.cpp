#include <iostream>
#include <string>
#include <boost/program_options.hpp>
#include <vector>

using namespace std;
using namespace boost;

int main(int argc, char* argv[]){
  program_options::options_description opts("options");
  opts.add_options()
    ("help,h", "ヘルプを表示")
    ("server,s", program_options::value<string>(), "サーバーのアドレス")
    ("port,p", program_options::value<int>(), "サーバーのport番号")
    ("fork", program_options::value<int>(), "preforkする数");
  program_options::variables_map argmap;
  program_options::store(parse_command_line(argc, argv, opts), argmap);
  program_options::notify(argmap);

  if(argmap.count("help") or !argmap.count("server") or !argmap.count("port")){
    cout << opts << endl;
    cout << "serverとportが必要です" << endl;
    return 1;
  }

  cout << "server : " << argmap["server"].as<string>() << endl;
  cout << "port : " << argmap["port"].as<int>() << endl;
  if(argmap.count("fork")) cout << "fork : " << argmap["fork"].as<int>() << endl;

  return 0;
}
