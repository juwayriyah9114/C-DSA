
#include <iostream>
#include <climits>
   
using namespace std;
int bubble_sort(int *arr,int n)
{
   int i,j;
   for(i=0;i<n-1;i++)
   {
      for(j=0;j<n-i-1;j++)
      {
         if(arr[j]>arr[j+1])
         {
            swap(arr[j],arr[j+1]);
         }
      }
   }
   for(i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
}
int main()
{
   int sorted;
   int arr[5]={5,4,1,2,3};
   bubble_sort(arr,5);
   
}