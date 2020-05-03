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
        N=stringlength(s); ;
        int moon=0;
        int i=0;
        int a[N+1];
        a[0]=0;
        int globalmax=0;
        int globalmax2=0;


        while(i<=N-1){
            if(s[i]=='('){a[i+1]=a[i]+1;}else{a[i+1]=a[i]-1;}

            if (a[i+1]>=moon){globalmax2++;

            if(a[i+1]==moon){if(globalmax2>globalmax){globalmax=globalmax2;} }

            }
            else {moon=a[i+1];


            if(globalmax2>globalmax){globalmax=globalmax2;}   globalmax2=0; }
            i++;
        }
        if (a[N]==moon){if(globalmax2>globalmax){globalmax=globalmax2; }}else{
            i=0;moon=0;
            a[0]=0;
            globalmax2=0;

            while(i<=N-1){
            if(s[N-i-1]==')'){a[i+1]=a[i]+1;  }else{a[i+1]=a[i]-1;}

            if (a[i+1]>=moon){globalmax2++;

            if(a[i+1]==moon){if(globalmax2>globalmax){globalmax=globalmax2;} }

            }


            else {moon=a[i+1];


            if(globalmax2>globalmax){globalmax=globalmax2;}   globalmax2=0;
             }
            i++;
        }





        }
    return globalmax;
};





private:

};













int main( )
{Solution q;
return q.longestValidParentheses("(((())))");
}
