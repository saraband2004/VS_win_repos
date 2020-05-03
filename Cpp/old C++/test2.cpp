using namespace std;
#include <iostream>
#include <string>

struct node {  int x;   node *next; };

class ohiostate{
public: //void coolsaying(){cout<<"president obama";};
    ohiostate(string z){setname(z);};
        void setname(string x){name=x;};
        string returnname(){return name;};
private: string name;

};




int  main()
{
   struct node *u;
   u=new node;
   u->x=5;
   u->next=new node;
   u->next->x=3123416;
   char g[3]={'x','x','\0'};
//   cout<<u->next->x<<endl;

    ohiostate tt("JJJJJJ");
//    tt.coolsaying();
  //  tt.setname("Star Wars");
    cout<<tt.returnname();

   return 0;
}


