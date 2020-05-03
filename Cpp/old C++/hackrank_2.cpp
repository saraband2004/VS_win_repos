#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;


void funk(int a[], int b[], int sizea, int sizeb){
std::stack<int> x;
std::stack<int> y;
std::stack<int> z;
//cout<<x.empty();
int i=0;int h=0; int H=0;
while (i<sizea){x.push(a[i]);i++;} i=0;
while (i<sizeb){y.push(b[i]);i++;}
while ((!x.empty())||(!y.empty())||h!=0){
    if(x.empty()){x.push(0);}
    if(y.empty()){y.push(0);}
    if (x.top()+y.top()+h>=10){

    z.push(x.top()+y.top()+h-10);
    h=1;

    }else{

    z.push(x.top()+y.top()+h);
    h=0;

    }

    x.pop(); y.pop();
}
int N = z.size();
int c[N];
i=0;
while(i<N){
    c[i]=z.top();
    z.pop();
    cout<<c[i];
    i++;

}
}






int main(){
int a[]={9,9,9,9,1};
int b[]={1,1};
funk(a,b,5,2);

return 0;}
