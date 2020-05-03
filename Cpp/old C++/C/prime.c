#include <stdio.h>
#include <math.h>
int main( ) {


int n;
n=2;

int i;
i=1;

int MAX;
MAX=10000;

int prime[MAX];
prime[1]=2;

int j;
printf("%dth Prime %d \n", i,n);

while(n<(MAX)){

    j=1;
    while(j<=i){
    if(n%prime[j]){

        j++;

}else{j=i+2;}
}
if(j==i+1){i++;  prime[i]=n; printf("%dth Prime %d \n", i,n);

}

    n++;

}




return 0;

}
