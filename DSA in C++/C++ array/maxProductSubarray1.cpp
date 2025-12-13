#include <bits/stdc++.h>
using namespace std;

int maxProductBrute(vector<int>& arr){
  int n= arr.size();
  if(n==0) return 0;
  int ans= arr[0];

  for(int i=0; i<n; i++){
    int current_product = 1;  // start fresh for each starting index i

    for(int j=i; j<n; j++){
      current_product *= arr[j];
      ans = max(ans, current_product);

    }
  }
  return ans;
}
int main() {
    vector<int> arr1 = {-2, 6, -3, -10, 0, 2};
    cout << maxProductBrute(arr1) << endl;
}