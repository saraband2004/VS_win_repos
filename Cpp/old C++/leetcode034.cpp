using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
vector<int> x(2);
int i;
int left=0;
int right=nums.size()-1;
int middle=0;
int L=0;
int R=0;
int M;
int help=0;
while(left<= right){

    if (nums[left]==target){    middle = left; M=middle; if(nums[right]==target){M=right; x[0]=middle;x[1]=M; return x;}   break;       }
    else if(nums[right]==target){     M = right; middle=M; break;      }
    else{
            middle=(left+right)/2; if(middle==left){x[0]=-1;x[1]=-1;return x; break; }
            if (nums[middle]==target){break;}else if(nums[middle]>target){right=middle;}else{ left=middle; }
        }
    }



M=middle;


while(1){
    R=(M+right+1)/2;
    if (R==right){break;}
    if(nums[R]==target){M=R;}
    else {right=R;}
}


while(1){
    L=(middle+left)/2;
    if (L==left){break;}
    if(nums[L]==target){middle=L;}
    else {left=L;}
}



x[0]=middle;
x[1]=M;


return x;
}


//public: int searchposition(vector<int>& nums, int target)



};










int main( )
{Solution q;
std::vector<int> s(5);
s[0]=2;
s[1]=2;
s[2]=2;
s[3]=2;
s[4]=2;

cout<<(q.searchRange(s,2))[0]<<endl<<(q.searchRange(s,2))[1];


//return q.searchposition(s,2);
return 0;
}
