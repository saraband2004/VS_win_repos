using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>


struct node{
char val;
struct node * next;
};

class stark{
public: struct node* top=0;
public: struct node* pushtotop(char c){
struct node * x;
x=new node;
x->val=c;
x->next=top;
top=x;
return top;
};
public: struct node* removefromtop(){
if (top!=0){top=top->next;}
return top;
}
public: bool topisempty(){
if(top==0){return 1;}else{return 0;}
}
};




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */


    //cout<<"t"<<s;
    class stark q;
    int i=0;
    int fail=0;


    fail=0;
    i=0;
    int g;
    cin>>g;
    string s;
    int count=1;
    while(count<=g){
    cin>>s;
    fail=0;
    i=0;
    q.top=0;
    while(i<s.size()){

        if(q.topisempty()){
            if (s[i]=='('||s[i]=='['||s[i]=='{'){ q.pushtotop(s[i]);}else{fail=1;cout<<"NO"<<endl;break; }
            }else if(s[i]=='('||s[i]=='['||s[i]=='{'){q.pushtotop(s[i]);}
            else if(s[i]==')'  &&  q.top->val== '('){q.removefromtop();}
            else if(s[i]==']'  &&  q.top->val== '['){q.removefromtop();}
            else if(s[i]=='}'  &&  q.top->val== '{'){q.removefromtop();}
            else{fail=1;cout<<"NO"<<endl;break;}
        i++;
    }

    if(fail==0){if(q.topisempty()){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}}
    count++;}
    return 0;
}
