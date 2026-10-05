#include<iostream>
#include<string>
using namespace std;
void bi(int n,int lastcall,string ans)
{
   if(n==0)
   {
      cout<<ans<<endl;
      return;
   }
   if(lastcall!=1)
   {
      bi(n-1,0,ans+"0");
      bi(n-1,1,ans+"1");
   }
   else
   {
      bi(n-1,0,ans+"0");
   }
}
  

int main()
{
   int n=3;
   string ans="";
   bi(n,0,ans);
}