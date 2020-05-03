using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

struct node{
int val;
struct node * left;
struct node * right;
};

struct snode{
    struct node * address;
    struct snode * next;
};


class tree{
public: struct snode * headofstack=0;
public: struct node * root=0;
public: struct node * create (struct node * p, int x, bool t=0){
if (p==0){p=new node; p->val=x; p->left=0; p->right=0; root=p; return p;}
else if (t==0){p->left=new node;  p=p->left;  p->val=x; p->left=0; p->right=0; return p;}
else if (t==1){p->right=new node; p=p->right; p->val=x; p->left=0; p->right=0; return p;}
};

public: void Addtostack(struct node * v){
struct snode * z;
z= new snode;
z->address=v;
z->next=headofstack;
headofstack=z;
}

public: struct node * Pushoutstack(){
struct node *p;
p=headofstack->address;
headofstack=headofstack->next;
return p;
}


public: void treeprinting(){
Addtostack(root);
//cout<<root->val<<endl;
struct node * p;
while (headofstack!=0){
    p=Pushoutstack();
    cout<<p->val<<endl;
    if (p->left!=0){Addtostack(p->left);}
    if (p->right!=0){Addtostack(p->right);}

}
};
};



int main( )
{
class tree T;
struct node * temp;
struct node * temp2;
temp=T.create(0,3,1);
temp=T.create(temp,5,0);
temp=T.create(temp,9,0);
T.create(temp,11,0);
T.create(temp,13,1);
temp=T.create(T.root,7,1);
temp2=temp;
temp=T.create(temp,23,0);
temp=T.create(temp2,2,1);

temp2=temp;
temp=T.create(temp,8,0);
temp2=T.create(temp2,4,1);

temp2=temp;
temp=T.create(temp,6,0);
temp2=T.create(temp2,15,1);

//cout<<T.root->left->left->  val;
T.treeprinting();
return 0;
}
