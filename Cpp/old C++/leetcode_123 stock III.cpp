
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;



class Solution{
public:
    int maxProfit(vector<int>& prices) {
        int N=prices.size();
        if (N<=1){return 0;}
        int a[N];
        int b[N];
        int localmin=prices[0];
        int i=1;
        a[0]=0;
        b[N-1]=0;
        while(i<N){
            if (prices[i]<localmin){localmin=prices[i];a[i]=a[i-1];}
            else if (prices[i]-localmin>a[i-1]){a[i]=prices[i]-localmin;}
            else{a[i]=a[i-1];}
            i++;
        }

        i=N-2;
        int localmax=prices[N-1];
        while(i>=0){
            if (prices[i]>localmax){localmax=prices[i];b[i]=b[i+1];}
            else if (localmax-prices[i]>b[i+1]){
                b[i]=localmax-prices[i];
            }
            else{b[i]=b[i+1];}
            i--;
        }

    i=0;
    int profit=a[N-1];
    while(i<N){
        profit=max(profit, a[i]+b[i]);i++;
    }




    return profit;
    }
};



class Solutionx{
public:
    int maxProfit(vector<int>& prices) {
        int N=prices.size()-1;
        if (N<=0){return 0;}
        int i=0;
        int profit=maxpro(prices, 0, N);

        while(i<=N){
            profit=max(profit, maxpro(prices, 0, i)+maxpro(prices, i+1, N));
            i++;
        }
        return profit;
    }



public: int maxpro(vector<int>& prices, int left, int right) {
    if (left>=right){return 0;}
    int i=left;
    int min=prices[left];
    int profit=0;
    while(i<=right){
        if (prices[i]>min){profit=max(profit, prices[i]-min);}
        else if(prices[i]<min){min=prices[i];}

        i++;
    }
    return profit;
}
};


int main(){

vector<int> prices;
prices.push_back(1);
prices.push_back(2);
prices.push_back(3);
prices.push_back(4);
prices.push_back(5);
prices.push_back(6);
prices.push_back(7);
prices.push_back(1);
prices.push_back(2);
int i=40010;
while(i>0){prices.push_back(i);i--;}
i=40010;
while(i>0){prices.push_back(0);i--;}
class Solution  x;
return x.maxProfit(prices);
}


class Solutionxx {
    public:
        int maxProfit(vector<int>& prices) {
            int L = prices.size();
            if( L<=1 )
                return 0;
            // fisrt part
            vector<int> maxDiffFirst(L,0);
            int minBuy = prices[0];
            for( int i = 1; i<L; i++ ){
                minBuy = minBuy<prices[i-1]? minBuy:prices[i-1];
                maxDiffFirst[i] = maxDiffFirst[i-1]>prices[i]-minBuy? maxDiffFirst[i-1]:prices[i]-minBuy;
            }
            // second part
            vector<int> maxDiffSecond(L,0);
            int maxSell = prices[L-1];
            int ret = maxDiffFirst[L-1];
            for( int i = L-2; i>=0; i-- ){
                maxSell = maxSell>prices[i+1]? maxSell:prices[i+1];
                maxDiffSecond[i] = maxDiffSecond[i+1]>maxSell-prices[i]? maxDiffSecond[i+1]:maxSell-prices[i];
                ret = ret>maxDiffSecond[i+1]+maxDiffFirst[i]? ret:maxDiffSecond[i+1]+maxDiffFirst[i];
            }
            ret = ret>maxDiffSecond[0]? ret:maxDiffSecond[0];
            return ret;

        }
    };


