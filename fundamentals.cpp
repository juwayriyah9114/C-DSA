
#include <iostream>
using namespace std;

int pro(int a)
{
    if(a%2==0)
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}
int main()
{
    int a;
    cout<<"enter the value number:";
    cin>>a;
    pro(a);

}
