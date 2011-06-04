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

void b(int sec){
  while(true){
    sleep(sec);
    cout << "b (" << sec << " sec)" << endl;
  }
}
 
int main(int argc, char* argv[]){
  if(argc < 2){
    cout << "main.bin 5" << endl;
    return 1;
  }
  int sec = atoi(argv[1]);
  thread th_a(a);
  thread th_b(b, sec);

  th_a.join();
  th_b.join();

  return 0;
}
