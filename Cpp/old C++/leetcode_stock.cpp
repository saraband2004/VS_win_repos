#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int right=prices.size()-1;

        return maytouch(prices, 0, right);

    }




public: int maytouch(vector<int>& prices, int left, int right){
    if (left>=right){return 0;}
    int profit;
    profit=maytouch(prices,left+1, right);
    int i=left+1;
    while(i<=right){
        profit=max(profit, -prices[left]  + prices[i] //+maytouch(prices,left+1, i-1)
                   //+maytouch(prices, i+1, right)
                   );
      i++;
    }
    return profit;
}
};


int main(){
vector<int> prices;
prices.push_back(1);
prices.push_back(5);
prices.push_back(1);
prices.push_back(3);
prices.push_back(2);
prices.push_back(2);
prices.push_back(1);





class Solution x;

return x.maxProfit(prices);
}
