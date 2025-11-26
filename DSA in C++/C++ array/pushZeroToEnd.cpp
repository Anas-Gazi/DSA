#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

  void pushZeroToEnd(vector<int> &arr){
    stable_partition(arr.begin(), arr.end(), [] (int x){
      return x !=0;
    });
  }
  int main(){
    vector<int>arr ={1,9,5,6,8,0,8,6,0};
    pushZeroToEnd(arr);
    for(int x : arr){
      cout<<x<< " ";
    }
    return 0;
  }
