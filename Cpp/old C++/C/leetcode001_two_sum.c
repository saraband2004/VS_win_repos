#include <stdio.h>
#include <stdlib.h>



int* twoSum(int* nums, int numsSize, int target) {

    int i;
    i=0;
    int j;
    static int z[2];
    while(i+1 < numsSize){
        j=i+1;
        while(j < numsSize){

            if(nums[i]+nums[j]==target){/*printf("%d and %d\n", i+1,j+1);*/

            z[0]=i+1;
            z[1]=j+1;
            break;
            }
            j++;
        }
        i++;
    }
    return z;
}


int main()
{
int nums[6]={1,11, 2, 7, 8, 15};
int numsSize=6;
int target=9;
int *h;

h=twoSum(nums, numsSize, target);
printf("%d and %d\n", h[0],h[1]);
return 0;
}
