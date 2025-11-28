#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>&arr){
  next_permutation(arr.begin(), arr.end());

}
int main(){
  vector<int> a={5,9,4,6,8,0,1,3,4,2};
  nextPermutation(a);
  for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
  }

}