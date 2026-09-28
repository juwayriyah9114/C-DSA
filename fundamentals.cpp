#include<iostream>
#include<string>
using namespace std;
class Shape{
   public:
   virtual void shape()=0;
};
class circle:public Shape{
   public:
   void shape(){
      cout<<"circle"<<endl;
   }
};
int main()
{
   circle c;
   c.shape();
   return 0;
}