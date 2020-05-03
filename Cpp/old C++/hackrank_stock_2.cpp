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
    int N=prices.size();


        int bought=prices[0];
        int profit=0;
        int i=0;
        while(i<N){
            if (prices[i]<bought){ bought=prices[i]; }
            if (prices[i]>bought){ profit=profit+prices[i]-bought;bought=prices[i];}
            i++;
        }

    return profit;
    }
};


class Solution3 {
public:
    int maxProfit(vector<int>& prices) {
        int right=prices.size()-1;

        return maytouch(prices, 0, right);

    }


public: int maytouch(vector<int>& prices, int left, int right){
    if (left>=right){return 0;}
    int profit;

    profit=0;
    int i=left+1;
    while(i<=right){
        profit=max(profit, maxProfit2(prices,left, i) //+maytouch(prices,left+1, i-1)
                   +maytouch(prices, i+1, right)
                   );
      i++;
    }
    return profit;
}


public:
    int maxProfit2(vector<int>& prices, int left, int right) {

if(left>=right){return 0;}

int minn=prices[left];

int profit=0;

int i=left;
while (i<=right){
    minn=min(minn, prices[i]);
    profit=max(profit, prices[i]-minn);
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



int b;
b=2147483647;
cout<<b+1<<"!";



class Solution x;

return x.maxProfit(prices);
}
