#include<iostream>
#include<string>
using namespace std;
class complex{
   int real;
   int ima;
   public:
   complex(int r,int i)
   {
      this->real=r;
      this->ima=i;
   }
   void show()
   {
      cout<<real<<"+"<<ima<<"i\n";
   }
   

};
int main()
{
   complex c1(85 , 7);
   complex c2(5 , 6);
   c1.show();
   return 0;
}