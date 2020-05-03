#include <stdio.h>
#include <stdlib.h>
 

 

int main() {
    // printf() displays the string inside quotation
    void* p = calloc(10 , 1);
    char* s = (char*)p;
    *s = 'a';
    *(s+1) = 'b';
    *(s+2) = 'c';
    *(s+3) = 'd';
    *(s+4) = '\0';
 
    void* q = p;
    
    for (int i = 12; i < 10000000; i++) {
        p = realloc(p, i);
        s = (char*)p;
        if (p != q) {
            printf("realloc %d\n", i);
        }
        //printf("%s %d ", s, i);         printf("%p\n", p);
        q = p;
    }
    
    return 0;
}
