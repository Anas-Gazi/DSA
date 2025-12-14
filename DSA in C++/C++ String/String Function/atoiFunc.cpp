#include <iostream>
#include <cstring>
using namespace std;
int main(){
  string s= "   -0012gfg4";

  const char* str=s.c_str();
  int result=atoi(str);
  cout << result<< endl;
  return 0;
}