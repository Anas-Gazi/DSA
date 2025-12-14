#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s){
  int i=0;
  int n = s.length();

  //step 1: skip leading whitespaces
  while(i<n && s[i] == ' '){
    i++;
  }

  //if string is empty
  if( i==n) return 0;

  //step 2 check for sign
  int sign =1;
  if(s[i] == '+' || s[i] =='-'){
    sign = (s[i] == '-')? -1:1;
    i++;
  }

  //step 3 convert digits to integer
  long long result =0;

  while(i<n && isdigit(s[i])){
    int digit = s[i] - '0'; // convert char to int

    //step 4 check for overflow BEFORE adding
    if(result > INT_MAX / 10 ||(result == INT_MAX/10 && digit>7)){
      return(sign == 1) ? INT_MAX : INT_MIN;
    }
    result = result * 10 +digit;
    i++;
  }
  return(int)(sign * result);

}

int main(){
  cout << myAtoi("   -123anc987");
  return 0;
}