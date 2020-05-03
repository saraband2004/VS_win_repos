using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>



class base{
public: int maxrecarea=0;
public: int recarea(int a[], int left, int right){
    if (left==right){return a[left];}
    int i=left;
    int minvalue=a[i];
    int minindex=i;
    while(i<=right){
        if(a[i]<minvalue){minvalue=a[i];minindex=i;}
        i++;
    }


    if (minindex==left){return std::max(minvalue*(right-left+1), recarea(a,left+1,right));}
    if (minindex==right){return std::max(minvalue*(right-left+1), recarea(a,left,right-1));}
    return std::max(std::max(minvalue*(right-left+1), recarea(a,left,minindex-1)),recarea(a,minindex+1,right));


};
private:
};











int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int N;
    cin>>N;
    int a[N];
    int i=0;
    while(i<N){cin>>a[i];i++;}
    i=0;
    while(i<N){cout<<a[i]<<" ! ";i++;}
    base x;


    return x.recarea(a,0,N-1);


}
