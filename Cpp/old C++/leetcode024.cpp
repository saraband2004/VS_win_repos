using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>



struct ListNode {
     int val;
     ListNode *next;
 //    ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode * a;
        ListNode * b;
        ListNode * c;
        ListNode * x;
        ListNode * y;
        ListNode * z;
        ListNode * u;
        if (head->next==0){return head;}
        if (head->next->next==0){
            head->next->next=head;
            a=head->next;
            head->next=0;
            return a;
        }else if(head->next->next->next==0){

            b=head->next->next;
            head->next->next=head;
            a=head->next;
            head->next=b;
            return a;
        }
            b=head->next->next;
            head->next->next=head;
            a=head->next;
            head->next=b;
            head=a;




x=head->next->next;
y=x->next;
z=head->next;//a=z;
u=y->next;



while(1){
        z->next=y;
        y->next=x;
        x->next=u;
        if (u==0){break;}else if(u->next==0){break;}else{
            z=z->next->next;
            x=u;y=u->next;
            u=y->next;
            //cout<<"!"<<u->val;
        }



}


return a;
    }


    void pront( ListNode* head){
    while(head!=0){cout<<head->val<<endl;head=head->next;}
    }
};

















int main( )
{Solution q;
struct ListNode * head;
head=new ListNode;
head->val=1;
head->next=new ListNode;
head->next->next=new ListNode;
head->next->val=2;
head->next->next->next= new ListNode;
head->next->next->val=3;
head->next->next->next->val=4;
head->next->next->next->next=new ListNode;
head->next->next->next->next->next=new ListNode;
head->next->next->next->next->val=5;
head->next->next->next->next->next->val=6;
head->next->next->next->next->next->next=0;
q.pront(head);
head=q.swapPairs(head);
q.pront(head);
return 0;// q.swapPairs(head)->val;
}
