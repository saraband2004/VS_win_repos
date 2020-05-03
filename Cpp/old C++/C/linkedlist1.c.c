#include <stdio.h>
#include <stdlib.h>

struct node {
  int x;
  struct node *next;
};

int main()
{
        /* This will be the unchanging first node */
    struct node *root;

    struct node *conductor;

    root = malloc( sizeof(struct node) );

    root->next = 0;

    root->x = 12;

    int i;
    i=1;

    conductor = root;
    while(i<20){
    conductor->x=i*100;

printf("xx%dxx%x\n", conductor->x, conductor);

    conductor->next = malloc( sizeof(struct node) );
    conductor = conductor->next;

    i++;
    }

    i=1;
    conductor=root;
    struct node *target;
    while(i<20){
    if(i+1==13)    {

    target=conductor->next;
    conductor->next=conductor->next->next;
    free(target);

    }

    conductor=conductor->next;
    i++;
    }



    i=1;
    conductor = root;
    while(i<19){
    printf("xx%dxx%x\n", conductor->x, conductor);
    conductor = conductor->next;

    i++;
    }

    return 0;



}
