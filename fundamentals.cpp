
#include <iostream>
using namespace std;

int pro(int a)
{
    int i,ans=1;
   for (i=1;i<=a;i++)
   {
    ans=ans*i;
   }
    return ans;
}
int main()
{
    int a,ans;
    cout<<"enter the value number:";
    cin>>a;
    ans=pro(a);
    cout<<ans;
    return 0;
}
