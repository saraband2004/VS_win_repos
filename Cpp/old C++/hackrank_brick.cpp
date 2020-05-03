#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;


int running2(){
    int N=232;
    int a[N];
    int i=0;
    int sum=0;
    while(i<N){a[i]=i*i;sum=sum+a[i];i++;}
    int b[N+1];
    b[N]=0;
    i=1;
    while(i<=3&& i<=N){b[N-i]=b[N-i+1]+a[N-i];i++;}
    if (N<=3){cout<<b[0]<<endl; return 0;}
    i=N-4;
    while(i>=0){
            b[i]=
            max(max(a[i]-b[i+1],a[i]+a[i+1]-b[i+2]),a[i]+a[i+1]+a[i+2]-b[i+3]);
            i--;}
            cout<< (b[0]+sum)/2<<endl;
    return 0;

}


int running(){
    int N;
    cin>>N;
    int a[N];
    int i=0;
    int sum=0;
    while(i<N){cin>>a[i];sum=sum+a[i];i++;}
    int b[N+1];
    b[N]=0;
    i=1;
    while(i<=3&& i<=N){b[N-i]=b[N-i+1]+a[N-i];i++;}
    if (N<=3){cout<<b[0]<<endl; return 0;}
    i=N-4;
    while(i>=0){
            b[i]=
            max(max(a[i]-b[i+1],a[i]+a[i+1]-b[i+2]),a[i]+a[i+1]+a[i+2]-b[i+3]);
            i--;}
            cout<< (b[0]+sum)/2<<endl;
    return 0;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int N;
  //  cin>>N;
    int i=1;
  //  while(i<=N){running();i++;}
    running2();
    return 0;
}
