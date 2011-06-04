#include <boost/thread.hpp>
#include <iostream>
using namespace std;
using namespace boost;

void a(){
  while(true){
    sleep(1);
    cout << "a" << endl;
  }
}

void b(){
  while(true){
    sleep(3);
    cout << "b" << endl;
  }
}
 
int main(int argc, char* argv[]){
  thread th_a(&a);
  thread th_b(&b);

  th_a.join();
  th_b.join();

  return 0;
}
