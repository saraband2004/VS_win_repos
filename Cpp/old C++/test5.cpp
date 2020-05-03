using namespace std;
#include <iostream>
#include <string>
#include <vector>

class base{
public: base(int z){
//    data=z;
    peter = new int;
    *peter = z;
    cout<<"construct\n"<<peter;

};
//public: int data;
public: base(const base &obj){

    cout<<"COPY_CONSTRUCT\n"<<obj.peter<<"\n";
    peter = new int;
    *peter = *(obj.peter);
    *peter=99;

};
public: int * peter;
public: ~base(){cout<<"\ndestroy";};
};

void display(base obj){
    cout<<*(obj.peter);
};

int  main()
{
    class base tutu(33);
    display(tutu);
    cout<<*tutu.peter;
    class base rabit(888);
    class base qq=rabit;
    return 0;
}
