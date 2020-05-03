using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class base{
private: int data=6;
public: friend void funk(base box);
};

void funk(base box){
cout<<box.data;
};

int main( )
{
base x;

funk(x);

   return 0;
}
