using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>

int stringlength(string s){
int i=0;
while (s[i]!='\0'){i++;}
return i;
}



class Solution {
public:
    int longestValidParentheses(string s) {

        int N;
        N=s.length();
        //S=s;
        int left=0;
        int right=N-1;

        int a[N+1];
        a[0]=0;
        int i=0;
        while (i<N){
                if (s[i]=='('){a[i+1]=a[i]+1;}
                if (s[i]==')'){a[i+1]=a[i]-1;}
                i++;}


        i=0;
        while(i<=N){cout<<a[i]<<endl;i++;}
funk(a,0,N);
        return globalmax;
    };

//public: string S;
//public: int a[];

public: int funk(int *a, int left, int right ){
int i=left;
int j=right;
int acc=0;
//int globalmax=0;
if (left==right){return 0;}
else {if(a[left]>=a[right]){
            while(i<right && a[i]>=a[left]){i++;}
            if(i==right&& a[left]==a[right]){i++; acc=1;}
            if(globalmax< i-left-1){globalmax=i-left-1; cout<<"max "<<globalmax<<endl;}
            if(acc==1){i--;}
            return funk(a,i,right);}
    else{
            while (left<j && a[j]>= a[right] ){j--;}
            if(globalmax< right-j-1){globalmax=right -j-1;}
            return funk(a,left,j);}

            }
}


public: int globalmax=0;
};
















int main( )
{Solution q;
q.longestValidParentheses("()()(())))())(()))(");

return stringlength("abcs()()");
}
