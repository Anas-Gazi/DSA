#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr= {1,0,2,6,5,9,4,2,3,5,8};
  sort(arr.begin(), arr.end());
  for(int i : arr){
    cout<< i << " ";
  }
  return 0;

}