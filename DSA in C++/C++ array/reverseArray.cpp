#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>arr={9,5,2,6,7,1,0};
  reverse(arr.begin(), arr.end()); //using reverse function to reverse
  for(int x : arr){
    cout<< x << " ";

  }
  return 0;
}