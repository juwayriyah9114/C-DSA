#include <iostream>
using namespace std;
int main(){
    int a,b,i,j,k;
    char ch='A';
    cout <<"enter the numbr of rows and colums"<<endl;
    cin>>a>>b;
    for(i=1;i<=a;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<ch;
                ch++;
            }
             cout<<endl;

        }
    }