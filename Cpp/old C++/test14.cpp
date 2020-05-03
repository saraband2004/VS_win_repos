using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

struct node{
struct node * next;
int val;
};


class queen{
public: struct node * head=0;
struct node * tail=0;
void addtotail(int x){
struct node * y;
y=new node;
y->val=x;
y->next=0;
if (head==0){head=y; tail=y;}else{
tail->next=y;
tail=y;
};
}

int removefromhead(){
int x;
x=head->val;
head=head->next;
return x;
}

void printfromhead(){
struct node * z=head;
while(z!=0){
    cout<<z->val<<endl;
    z=z->next;
}
}

};




int main( )
{
    queen q;
    q.addtotail(1);
    q.addtotail(2);
    q.addtotail(3);
    q.addtotail(4);
    q.removefromhead();
    q.addtotail(5);
    int t;
    t=0;
    while(t*t<100){q.addtotail( t*t );t=t+1;}
    q.removefromhead();
    q.printfromhead();



return 0;
}
