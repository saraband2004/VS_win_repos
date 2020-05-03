#include <stdio.h>
#include <stdlib.h>

struct dataitem{
int key;
int pos;

};





int* twoSum(int* nums, int numsSize, int target) {


    static int z[2];
    struct dataitem * hasharray[numsSize];
    int i;
    int j;
    i=0;
    int index;
    int endix;
    while(i<numsSize){hasharray[i]=0;i++;}
    i=0;
    /*
    hasharray[3]=malloc(sizeof(struct dataitem));
    hasharray[3]->key=990     ;
    hasharray[3]->pos=22;
    hasharray[0]=0;
    printf("%x add", hasharray[0]);
    */




    while(i<numsSize){

        endix= (target-nums[i])%numsSize;
            endix=endix+numsSize;
            endix=endix%numsSize;

        while(hasharray[endix]!=0){
            if (hasharray[endix]->key + nums[i]==target) {z[0]=hasharray[endix]->pos + 1; z[1]=i +1; return z; break;}
            endix++;
            endix=endix%numsSize;
            endix=endix+numsSize;
            endix=endix%numsSize;
        }



        index=nums[i]%numsSize;
        index=index+numsSize;

        index=index%numsSize;

        while(1){
        if (hasharray[index]==0){
            hasharray[index]=malloc(sizeof(struct dataitem));
            hasharray[index]->key=nums[i]            ;
            hasharray[index]->pos=i; break;
        }
        index++;
        index=index%numsSize;
        index=index+numsSize;

        index=index%numsSize;

        }
        i++;

    }

}








int main()
{
int nums[4]={-3,4,3,90};
int numsSize=4;
int target=0;
int *h;

h=twoSum(nums, numsSize, target);
int i=0;
while(i<numsSize){printf("%d ",nums[i]);i++;}

printf("\n%d and %d\n", h[0],h[1]);
return 0;
}
