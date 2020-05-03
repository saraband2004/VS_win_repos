using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

struct node {
int val;
struct node * next;
};

class stok{
private: struct node * head=0;
public: void addnew(int x){
struct node *h;
h=new node;
h->val=x;
h->next=head;
head=h;
};


public: void prontstok(void){
struct node *h;
h=head;
while(h!=0){
cout<<h->val<<endl;
h=h->next;
}
};


public: int takeoutfirst(void){
int x=head->val;
struct node *h;
h=head;
head=head->next;
delete h;
return x;
};



};



int main( )
{
    class stok T;
    T.addnew(5);
    T.addnew(234);
    T.addnew(52);
    T.addnew(1999);
    T.addnew(77);
    T.prontstok();
    T.takeoutfirst();
    T.takeoutfirst();
    T.prontstok();

return 0;
}
