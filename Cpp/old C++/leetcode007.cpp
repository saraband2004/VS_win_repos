using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int sign;
       if (x==0){return 0;}
        if (x>0){sign=1;}
        if (x<0){sign=-1;x=x*sign;}

        int digit[100];
        int i=0;

        int h=1;
        while(x!=0){
            digit[i]=x%10;
            x=(x - (x%10))/10;
            if (x==0){break;}
            i++;
        }

        int j=0;
        while(j<=i){
             x=10*x+digit[j];
             j++;
        }
       // cout<<endl<<"d "<<x;
  return sign*x;
    }
};



int main( )
{
Solution uu;
vector<int> vec(3);
vec[2]=19999991;
cout<<vec[2];
return uu.reverse(1230567891);
}
