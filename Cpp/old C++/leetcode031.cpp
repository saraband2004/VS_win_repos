using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>




class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int N=nums.size();
        int i;  int j; int k;
        int b;
        i=N-1; k=N-1;
        while (i>=1 && nums[i-1]>=nums[i]){i--;}
        if(i!=0){

                j=N-1;
                b=nums[i-1];
                while (nums[j]<=b){j--;}
                nums[i-1]=nums[j];
                nums[j]=b;


                while (i<=k){
                    b=nums[i];
                    nums[i]=nums[k];
                    nums[k]=b;


                    i++;k--;
                }



        }


        if(i==0){
            while(i<= (N+1)/2-1) {b=nums[i];nums[i]=nums[N-1-i];nums[N-1-i]=b;i++;}
        }
    }
};





int main( )
{Solution q;
std::vector<int> s(4);
s[0]=3;s[1]=2; s[2]=1; s[3]=5;// s[4]=-1;

q.nextPermutation(s);
int i=0;
while(i<s.size()){cout<<s[i]<<endl;i++;}
return s.size();;
}
