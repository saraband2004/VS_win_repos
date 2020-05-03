#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int sign;
        if (x==0){return 0;}
        if (x>0){sign=1;}
        if (x<0){
            sign=-1;
            x=x*sign;
        }

        std::queue<int> u;
        int i=0;


        while(x!=0){
            u.push(x%10);
            x=(x - (x%10))/10;
            if (x==0){break;}
        }

        int j=0;
        x=0;
        while(!u.empty()){
             if (x>214748364){return 0;}
             x=10*x;

             if (x<0){return 0;}
             x=x+ u.front();
             if (x>2147483648||x<0){return 0;}
             u.pop();
        }
       // cout<<endl<<"d "<<x;
        return sign*x;
    }
};

main(){
Solution x;
return x.reverse(19980128);
}
