#include <stdio.h>
#include <stdlib.h>







int* twoSum(int* nums, int numsSize, int target) {

    int i;
    i=0;
    int j;
    j=numsSize;
    static int z[2];


    while(1){
    while(nums[i]+nums[j-1]>target){

    j--;}

    if(nums[i]+nums[j-1]==target){break;}

    i++;

    }

    z[0]=i+1; z[1]=j;
    return z;
}


int main()
{
int nums[6]={1, 2, 4, 7, 8, 11};
int numsSize=6;
int target=9;
int *h;

h=twoSum(nums, numsSize, target);
int i=0;
while(i<numsSize){printf("%d ",nums[i]);i++;}

printf("\n%d and %d\n", h[0],h[1]);
return 0;
}
