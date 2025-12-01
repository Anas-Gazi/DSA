// Kadane's Algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr){
  int maxSoFar= arr[0];
  int maxEnding= arr[0];

  for(int i=1; i<arr.size(); i++){
    maxEnding= max(arr[i], maxEnding + arr[i]);
    maxSoFar= max(maxSoFar, maxEnding);
  }
  return maxSoFar;
}
int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr); 
    return 0;
}