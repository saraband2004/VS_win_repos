using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>




int funk(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    int sum=0;
    while(i<n){cin>>a[i];sum=sum+a[i];i++;}
    i=0;
    //while(i<n){cout<<a[i]<<" ! ";i++;}
    int sumleft=0;
    while(i<n){
        if (i!=0){sumleft=sumleft+a[i-1];}
        sum=sum-a[i];
        if (sum==sumleft){ cout<<"YES"<<endl;return 0;}
        i++;
    }

cout<<"NO"<<endl;
return 0;
}




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    int i;
    for(i=1;i<=N;i++){
    funk();
    }

    return 0;
}

