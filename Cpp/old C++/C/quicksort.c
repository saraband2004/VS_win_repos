#include <stdio.h>
#include <stdlib.h>





int quickSort(int *Nums, int left, int right, int Size) {

int partition;

if(left<right){
    partition=subquickSort(Nums, left, right, Size);
    quickSort(Nums,left,partition-1, Size);
    quickSort(Nums,partition+1,right, Size);
}
    return 0;
}

int subquickSort(int *Nums, int left, int right, int Size) {
    int partition;
    int i; int j;
    int a; int b;
    int pivot;
    i=left; j=right-1;
    pivot=Nums[right];

    while(1){if(i>=j){break;}
    if(i<j){
    if(Nums[i]>=pivot && Nums[j]<=pivot){
        a=Nums[i];b=Nums[j];
        Nums[j]=a;Nums[i]=b;
        i++;if(i>=j){break;}else{j--;}
    }
    if(i>=j){break;}
    if(Nums[i]<pivot){i++;}
    if(i>=j){break;}
    if(Nums[j]>pivot){j--;}
    }
    }

    if(Nums[i]>pivot){
        a=Nums[i];b=Nums[right];
        Nums[right]=a;Nums[i]=b;
    }else if(Nums[i]<pivot){
        a=Nums[i+1];b=Nums[right];
        Nums[right]=a;Nums[i+1]=b;
        i=i+1;
    }
int l;
l=0;
while(l<Size){
printf("%d ", Nums[l]);l++;}
printf("\n");
    return i;
}





int main()
{
int Nums[]={5,4,3,2,1,4};
int Size=6;
int l;l=0;

while(l<Size){  printf("%d ", Nums[l]);  l++;  }
printf("\n");

quickSort(Nums, 0, Size-1, Size);

l=0;

while(l<Size){  printf("%d ", Nums[l]);  l++;  }

return 0;
}
