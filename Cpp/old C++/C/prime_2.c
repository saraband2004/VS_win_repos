#include <stdio.h>

int add(int x, int y) {
    return x + y;
}


typedef struct
{
    int x;
    int y;
    int z;

} Point;

int main() {
    Point p1;
    p1.x = 111;
    p1.y = 2222;
    p1.z = 33333;

    Point p2;
    printf("%p %p \n", &p1, &p2);
    p2 = p1;
    Point* pp = &p1;




    printf("%d  %d  %d  \n", p2.x, p2.y, p2.z);

    pp->x = 1883;

    printf("%p %p %d  %d  %d  \n", pp, &p1, p1.x, p1.y, p1.z);

    int x[5] = { 1,2,3,4,5 };
    int* p = &x;
    printf("%p %p %p", p, x, &x[1]);

    return 0;
}
