#include<iostream>

using namespace std;
int sum(int n)
{
   while(n>0)
   {
      return n+ sum(n-1);
      
   }
}
int fibonacci(int n)
{
   if(n==0)
   {
      return 0;
   }
   else if(n==1)
   {
      return 1;
   }
   else
   {
      return fibonacci(n-1)+fibonacci(n-2);
   }
}
int main()
{
  int res=  sum(5);
  cout<<res<<endl;
  int fib_res = fibonacci(5);
  cout<<fib_res<<endl;
  return 0;
}