using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>


int catalan(int n)
{   int i=1;
    int p=1;
    while(i<=n){p=p*(2*i)*(2*i-1)/(i*i); i++;}

    return p/(n+1);
}



class Solution {
public:
    vector<string> generateParenthesis(int n) {

        if (n==1){
                static vector<string> x(1);
                x[0]="()";  return x;}

        if (n==2){
                static vector<string> x(2);
                x[0]="()()";
                x[1]="(())";
                  return x;}
        int i=1;

        vector<string> x(catalan(n));
        int j=0;
        int a=0;
        int b=0;
        while(i<=n-2){
                vector<string> u=generateParenthesis(i);
                vector<string> v=generateParenthesis(n-1-i);
                a=0;
                while(a<catalan(i)){
                    b=0;
                    while(b<catalan(n-1-i)){
                            x[j]="(";
                            x[j]=x[j]+u[a]+")"+v[b];
                           // cout<<x[j]<<j<<endl;
                            b++;
                            j++;
                    }
                    a++;
                }
                i++;
        }
//cout<<"begin";
        vector<string> h=generateParenthesis(n-1);
        a=0;
        while(a<catalan(n-1)){
            x[j]="()";
            x[j]=x[j]+h[a];
         //   cout<<x[j]<<j<<endl;
            j++;
            a++;
        }

//cout<<"after";

        a=0;
        while(a<catalan(n-1)){
            x[j]="(";
            x[j]=x[j]+h[a]+")";
            //cout<<x[j]<<j<<endl;
            j++;
            a++;
        }

        return x;
    }
};




int main( )
{


Solution q;
vector<string> x=q.generateParenthesis(4);
cout<<"y"<<x[3];


return catalan(10);
}
