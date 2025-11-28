#include <iostream>
#include <vector>
#include <algorithm>   // for reverse()
using namespace std;

// Function to rotate array to the RIGHT by k steps
void rotateRight(vector<int>& arr, int k) {
    int n = arr.size();
    
    if (n == 0) return;          
    k = k % n;                    
    if (k == 0) return;           // no rotation needed
    
    // Step 1: Reverse entire array
    //reverse(arr.begin(), arr.end());
    
    // Step 2: Reverse first k elements
     //reverse(arr.begin(), arr.begin() + k);
    
    // Step 3: Reverse the remaining part
    reverse(arr.begin() + k, arr.end());
}
int main(){
  vector<int>arr= {1,2,3,4,5,6,7,8,9};
  int k=2;
  rotateRight(arr,k);
  for(int x : arr){
    cout <<x<< " ";
  }
}


