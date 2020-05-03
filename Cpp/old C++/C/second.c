#include <stdio.h>
#include <string.h>

struct point {
    int   x[2];
    int   y;
};

/* function declaration */
/*void printBook( struct Books book );*/


int main( ) {
   struct point a;
   a.x[0]=331;
   a.x[1]=99;
   a.y=22;

printf( "x:%d\ny:%d\n", a.x[1], a.y);


struct point *b;
b=&a;

printf( "ip address%x", b);
printf( "ip address%d", (*b).x[0]);
   return 0;




}
