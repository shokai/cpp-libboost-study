#include <boost/scoped_ptr.hpp>
#include <string>
#include <iostream>
using namespace std; 
using namespace boost;

int main(int argc, char* argv[]) 
{ 
  scoped_ptr<string> p(new string("scoped ptrを使う"));

  if(p) cout << *p << endl;
  
  size_t i = p->size();
  cout << "size:" << i << endl;

  *p = "ポインタのように値を書き換え";
  cout << *p << endl;
  return 0;
} // pとstd::stringは自動破棄される
