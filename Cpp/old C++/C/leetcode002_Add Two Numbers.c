#include <stdio.h>
#include <stdlib.h>

 struct ListNode {
     int val;
     struct ListNode *next;
 };


struct ListNode* adddigit(struct ListNode* L, int n ) {

    if (L==0){
        L=malloc(sizeof(struct ListNode));

    }else{
    L->next=malloc(sizeof(struct ListNode));
    L=L->next;

    }


    L->val=n;
    L->next=0;
    return L;
}




struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode *c1;
    struct ListNode *c2;
    c1=l1;
    c2=l2;
    struct ListNode *root;
    struct ListNode *conductor;
    root=0;
    int remain;
    remain=0;
    int a1;
    int a2;

    while( remain !=0 || c1 !=0  || c2 !=0   ){

            if (root==0){
                /*root=malloc(sizeof(ListNode)) ;*/

                if(c1->val + c2->val >=10){
                    remain=1;
                    root=adddigit(root, c1->val + c2->val -10);
                    conductor=root;
                    c1=c1->next;
                    c2=c2->next;

                }else{
                    remain=0;
                    root=adddigit(root, c1->val + c2->val );
                    conductor=root;
                    c1=c1->next;
                    c2=c2->next;

                }

            }else{
                if (c1==0) {a1=0;}else{a1=c1->val;}
                if (c2==0) {a2=0;}else{a2=c2->val;}

                if(a1 + a2 + remain >=10){

                    conductor=adddigit(conductor, a1+a2+remain-10);
                    remain=1;
                    if (c1 !=0){c1=c1->next;}
                    if (c2 !=0){c2=c2->next;}


                }else{

                    conductor=adddigit(conductor, a1+a2+remain);
                    remain=0;
                    if (c1 !=0){c1=c1->next;}
                    if (c2 !=0){c2=c2->next;}


            }


    }
}
return root;
}







int printlist(struct ListNode* L) {
    struct ListNode *conductor;
    conductor=L;
    while(conductor!=0){
    printf("%d", conductor->val);
    conductor=conductor->next;}
    printf("+");
    return 0;
}


int main(){
struct ListNode *root1;
struct ListNode *root2;
struct ListNode *conductor;
root1=0;
root2=0;
/*
printf("%x\n",conductor->next);
root=malloc(sizeof(struct ListNode));
root->val=3;
root->next=0;*/
root1 =adddigit(root1,9);
conductor=adddigit(root1,9);
conductor=adddigit(conductor,9);
conductor=adddigit(conductor,9);


root2 =adddigit(root2,1);
conductor=adddigit(root2,1);
conductor=adddigit(conductor,0);
conductor=adddigit(conductor,0);
conductor=adddigit(conductor,0);


printlist(root1);
printlist(root2);
printlist(addTwoNumbers(root2,root1));

return 0;

}

