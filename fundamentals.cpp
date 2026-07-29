
#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter the no. of elements to be stored in the array\n ";
   cin>> n;
   int arr[n];
   for(int i=0;i<n;i++)
    {
        cout<<"enter the"<<i+1<<"value\n";
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"maximum value="<<max;


}