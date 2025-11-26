#include<iostream>
#include<vector>
using namespace std;
  void reverseArr(vector<int>&arr){
    int left=0, right = arr.size()-1;
    while(left < right){
      swap(arr[left], arr[right]);
      left ++;
      right --;
    }
    }
int main(){
  vector<int> arr= {9,4,2,9,7,3,5};
  reverseArr(arr);
  for(int n : arr){
    cout << n << " ";
  }

}