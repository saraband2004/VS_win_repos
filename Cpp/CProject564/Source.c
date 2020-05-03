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
    char str[] = "abcdefg";
 

    char x = 'a';
    void* t = &x;
    int* p = t;
    
    printf("%p\n", t);
    printf("%p\n", &t);
    printf("%c", *p);
    return 0;
}
