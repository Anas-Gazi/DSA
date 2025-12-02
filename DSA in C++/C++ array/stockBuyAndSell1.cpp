#include <iostream>
#include<vector>
#include <cstring>
using namespace std;

int maxProfit(vector<int>& price){
  int n= price.size();
  int res=0;

  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      res= max(res, price[j] - price[i]);
    }

  }
  return res;
}
int main() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maxProfit(prices) << endl;
    return 0;
}