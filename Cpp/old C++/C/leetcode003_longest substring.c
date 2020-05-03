#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  char val;
  struct node *next;
};

struct node * AddtoQueue(struct node * initial, char x){
struct node * conductor;
conductor=initial;
if(initial==0){initial=malloc(sizeof(struct node)); initial->val=x; initial->next=0; }
else{
while(conductor->next!=0){conductor=conductor->next;}
conductor->next=malloc(sizeof(struct node));
conductor=conductor->next;
conductor->val=x;
conductor->next=0;
}
return initial;
}


struct node * AddtoQueue2(struct node * initial, char x, int * length){
struct node * conductor;
struct node * adjunct;
conductor=initial;
adjunct=initial;
if(initial==0){initial=malloc(sizeof(struct node)); initial->val=x; initial->next=0; }
else{conductor = initial;
while(conductor->next!=0){
        if (conductor->val==x){break;}
        conductor=conductor->next;}

if (conductor->val!=x){
       /*      printf("U1");*/
conductor->next=malloc(sizeof(struct node));
conductor=conductor->next;
conductor->val=x;
conductor->next=0;

}else{
adjunct=initial;
PrintQueue(adjunct, length);
initial=conductor->next;
initial=AddtoQueue(initial, x);
conductor->next =0;
PrintQueue(adjunct, length);
/*printf("PA.");*/
}
}
return initial;
}


int free2(struct node * initial){
struct node * conductor;
conductor=initial;
while(conductor!=0){
    printf("%c_", conductor->val);
    conductor=conductor->next;
}
return 0;
}


int lengthOfLongestSubstring(char* s) {
    int length[2];
    length[0]=0;
    int i;
    i=0;
    struct node * root;
    root=0;

    while(s[i]!='\0'){
        root=AddtoQueue2(root,s[i],length);
        i++;
    }
    PrintQueue(root, length);
    return length[0];
}


int PrintQueue(struct node * initial, int * length){
struct node * conductor;
conductor=initial;
int i;
i=0;
while(conductor!=0){
 /*   printf("%c.", conductor->val);*/
    conductor=conductor->next;
    i++;
}
if (i>length[0]){length[0]=i;}
return 0;
}

int main()
{
char *s="abcdc";
printf("s-string %s\n", s );
return lengthOfLongestSubstring(s);

/*    struct node *initial;
    struct node *h;

initial=0;


    initial=AddtoQueue(initial, '3');AddtoQueue(initial, 'd');AddtoQueue(initial, 'u');
    PrintQueue(initial);



   /*char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("Greeting message: %s\n", greeting );


   char str1[] = "1234";
   char str2[] = "World";
   char str3[12];
   int  len ;

   printf("ddddd %x\n", strchr(str2, 'd'));

   printf("string1 %s\n", str1 );
   printf("string2 %s\n", str2 );

strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );


   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );


   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );


      const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
    return 0;
*/
}


