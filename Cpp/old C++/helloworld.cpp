using namespace std;
#include <iostream>
   extern int j;
int main()
{
   int x;
   int j;
   int i;
   int y;
   y=1999199;
   i=y;
   while(i< 3*y){
        j=2;
        x=1;
        while(j<i){
            if(i%j==0){x=0;break;}
            j++;
        }

   if (x==1){std::cout<<i<<endl; }


   i++;

   }

   return 0;
}

