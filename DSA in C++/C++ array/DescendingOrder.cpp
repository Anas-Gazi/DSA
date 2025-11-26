#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr= {0,9,2,6,5,4,8,2,1,4};
  sort(arr.begin(), arr.end(), greater<int>());
  for(int x : arr){
    cout << x << " ";
  }
  return 0;
}