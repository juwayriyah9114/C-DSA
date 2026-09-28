#include<iostream>
#include<string>
using namespace std;
class a{
   public:
   a()
   {
      cout<<"constructor a"<<endl;
   }
   ~a()
   {
      cout<<"destructor a"<<endl;
   }
};
class b:public a{
   public:
   b()
   {
      cout<<"constructor b"<<endl;
   }
   ~b()
   {
      cout<<"destructor b"<<endl;
   }
};
int main()
{
   b obj;
   return 0;
}