#include <iostream>
#include <string>
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>

using namespace std;
using namespace boost;

// 多値を返す
tuple<int, double, string> test_func(){
  return make_tuple(15, 3.14, "hello work");
}

int main(int argc, char* argv[]){
  tuple<int, double, string> result_t = test_func();
  cout << result_t.get<0>() << endl; // 個別の値を取り出す
  cout << result_t.get<1>() << endl;
  cout << result_t.get<2>() << endl;

  cout << result_t << endl; // tuple_ioのincludeが必要
  return 0;
}
