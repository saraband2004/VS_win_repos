using namespace std;
#include <iostream>
#include <string>
#include <vector>

struct node {  int x;   node *next; };

class ohiostate{
public: //void coolsaying(){cout<<"president obama";};
    ohiostate(string z){setname(z);};
        void setname(string x){name=x;};
        string returnname(){return name;};
private: string name;

};



class Solution {
public:
    int summmm(vector<int>& v) {

        int j=0;
        int i=0;
        while(i<3){j=j+ v[i];i++;}

        return j;
    }
};




int  main()
{

int age;
age=5;

//while(age<100 ) {if (age==15){break;}cout<<"HaHa "<<age;age++;}

std::vector<int> v;
v.push_back(3);
v.push_back(4);
v.push_back(6);

class Solution xxx;

return xxx.summmm(v);
}


