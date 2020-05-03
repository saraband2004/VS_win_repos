using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class base{
public: int data;
};

class derived: public base{
public: int qqq;
};



int main( )
{
base x;
x.data=5;

derived y;
y.data=6;
return 0;
}
