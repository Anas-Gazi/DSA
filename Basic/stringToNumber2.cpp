#include <iostream>
using namespace std;

int main()
{
  string s = "122";
  int n = 0;

  for( char c : s){
    n= n*10 +(c - '0');
  }
  cout << n << endl;
  return 0;
}