using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

int fact(int n){
    if (n==0||n==1){return 1;}
    return n*fact(n-1);

}

class Solution {
public:
    int uniquePaths(int m, int n) {
        int a[m][n];
        int i=0;
        while(i<m){a[i][0]=1;i++;}
        i=0;
        while(i<n){a[0][i]=1;i++;}
        int k=2;
        while(k<m+n){
            i=1;
            while(i<k){
                if(i<m && k-i<n ){
                    a[i][k-i]= a[i-1][k-i]+a[i][k-i-1];


                }

                i++;
            }

            k++;
        }
        return a[m-1][n-1];
    }
};


class Solutionx {
public:
    int uniquePaths(int m, int n) {
        //return (fact(m+n-2)/(fact(m-1)*fact(n-1)));

        if (m>n){int c=m;m=n;n=c;}
        int i=m-1;
        int j=m+n-2;
        int p=1;
        int q=1;
        while(i>=1){
            q=q*j;
            p=p*i;
            i--;
            j--;


        }
        return q/p;


    }
};








int main( )
{Solution q;

return q.uniquePaths(120,120);// q.swapPairs(head)->val;
}
