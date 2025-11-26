#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void pushZerosToFront(vector<int>&arr){
  stable_partition(arr.begin(), arr.end(), [](int x){
    return x==0;
  });
}
int main(){
  vector<int> arr= {1,0,5,9,0,5,0,7,3};
  pushZerosToFront(arr);
  for(int a : arr){
    cout<< a << " ";
  }
  return 0;
}