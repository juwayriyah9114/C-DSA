
#include <iostream>
#include <climits>
using namespace std;
void subarray(int *arr, int n)
{
   int maxSum = INT_MIN;
   for(int start=0; start<n; start++)
   {
      for(int end=start; end<n; end++)
      {
         int cursum=0;
         for(int i=start; i<=end; i++)
         {
            cursum=cursum+arr[i];
         }
         if(cursum>maxSum)
         {
            maxSum=cursum;
         }
      }
      cout<<endl;
   }
   cout<<"Maximum sum of subarray is:" << maxSum << endl;
}
int main()
{
   int arr[5]={1,2,3,4,5};
   int n=5;
   subarray(arr, n);
}