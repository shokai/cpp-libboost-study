#include <iostream>
#include <ctime>
#include <boost/random.hpp>

using namespace std;
using namespace boost;

int main(void){
  mt19937 gen(static_cast<unsigned long>(time(0)));
  uniform_smallint<> dst(1, 100); // 1~100の乱数 uniform_realでdouble型になる
  variate_generator<mt19937, uniform_smallint<> > rand( gen, dst );
  for (int i = 0; i < 10; i++) {
    std::cout << rand() << std::endl;
  }
  return 0;
}
