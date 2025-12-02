#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices){
  int a = prices[0], res=0;

  for(int i=0; i<prices.size(); i++){
    a= min(a, prices[i]);
    res= max(res, prices[i] - a);
  }
  return res;
}
int main() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maxProfit(prices) << endl;
    return 0;
}