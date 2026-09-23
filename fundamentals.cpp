#include <iostream>
#include<vector>

using namespace std;

int main()
{
   int n=7,i=2,val=0;
   int c=(n<<i);
   printf("The value at 2nd bit  is %d\n",c);
   int d=n|c;
   if(d==val)
   {
      printf("The bit at position 2nd is %d\n",d);
   }
   else{
      printf("The bit at position 2nd is %d\n",~d);
   }

}