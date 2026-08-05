
#include <iostream>
#include <climits>
   
using namespace std;
int kadan(int *arr,int n)
{
   int current_sum = 0;
   int max_sum=INT_MIN;
   for (int i=0;i<n;i++)
   {
      current_sum+=arr[i];
      max_sum=max(max_sum,current_sum);
      if(current_sum<0)
      {
         current_sum=0;
      }
   }

   return max_sum;

}
int main()
{
   int n,max_sum;
   int arr[100]; // Assuming a maximum size of 100
   cout<<"Enter the size of the array: ";
   cin>>n;
   cout<<"Enter the elements of the array: ";
   for(int i=0; i<n; i++)
   {
      cin>>arr[i];
   }
   max_sum=kadan(arr,n);
   cout<<"Maximum contiguous sum is: "<<max_sum<<endl;

}