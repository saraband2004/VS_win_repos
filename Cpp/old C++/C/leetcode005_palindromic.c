#include <stdio.h>
#include <stdlib.h>

struct node{
char val;
struct node * next;
};

struct node * addnode(struct node* head, char c){
    struct node * neu;
    neu=malloc(sizeof(struct node));
    neu->next=head;
    neu->val=c;
    printf("%c", neu->val);
    return neu;
};


char* longestPalindrome(char* s) {
    static *palin;
    palin=0;
    int i=0;
    int j=0;
    while (s[i]!='\0'){

        if (palin!=0){if(palin->val=s[i]){



        }}



        palin=addnode(palin,s[i]);i++;

    }

    return palin;
}



int main(){
    char *s = "abcabcabcab";

    /*printf("%s",s);*/

    longestPalindrome(s);
return 0;}
