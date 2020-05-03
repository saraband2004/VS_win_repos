using namespace std;
#include <iostream>
#include <string>
#include <vector>
struct node {  int x;   node *next; };

class base{
protected: int a;
public: virtual void funk()=0;
};

class first: public base{
public: void funk(){cout<<"first\n";};
};

class second: public base{
public: void funk(){cout<<"second\n";};
};


class first klone(const class first &x){
static first y=x;

return y;
}





int  main()
{cout<<endl;
first x;
second *y;

cout<<&x<<endl<<y;

second &z=*x;

return 0;
}


