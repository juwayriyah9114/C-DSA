#include <iostream>
using namespace std;
int main(){
    int i,n;
    bool isprime=true;
    cout<<"enter the value of n:";
    cin>>n;
   for(i=2;i<=n-1;i++)
   {
    if(n%i==0)
    {
        isprime=false;
        break;
    }
   }
   if(isprime==true)
    cout<<"the number is prime"<<endl;
   else
    cout<<"the number is not prime"<<endl;

    return 0;
};