#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;

    char y[10] = "tasked";

    char *x = y;

    n = strlen (x);

    *(x+4) = x[n];

    x++;

    printf ("%s",x);

}
