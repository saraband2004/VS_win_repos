#include <stdio.h>
#include <string.h>

struct point {
    int   x;
    struct point *address;
};

/* function declaration */
/*void printBook( struct Books book );*/


int main( ) {
   struct point a;
   a.x=22;
   struct point *c;
   c=&a;

int i;
i=1;

struct point b;

while(i<10){

    b.x=i+100;
    a.address=&b;

    static struct point a;
    a.x=b.x;

    i++;
}




printf("%d",b.x);

printf("\n%d",(*((*c).address)).x);



return 0;
}
