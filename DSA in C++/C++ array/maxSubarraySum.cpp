#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int arr[]= {2, 3, -8, 7, -1, 2, 3};
  int n= 7;
  int maxSum=arr[0];

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      //calculate sum from i to j
    int currSum= 0;
    for(int k=i; k<=j; k++){
      currSum += arr[k];
    }
    // Update maxSum if this is bigger
        if(currSum > maxSum){
        maxSum = currSum;
      }
    }
  }
  cout<< maxSum << endl;
  return 0;

}