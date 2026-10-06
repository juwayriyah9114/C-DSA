#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int s,int mid,int e)
{
   vector<int> temp;
   int i=s;
   int j=mid+1;
   while(i<=mid && j<=e)
   {
      if(arr[i]<arr[j])
      {
         temp.push_back(arr[i++]);
         i++;
      }
      else
      {
         temp.push_back(arr[j++]);
         j++;
      }
   }
   if(i<=mid)
   {
      
         temp.push_back(arr[i++]);
  }
   if(j<=e)
   {
     
         temp.push_back(arr[j++]);
     
   }
   for(int ide=s,x=0;ide<=e;ide++)
   {
      arr[ide]=temp[x++];
   }

}
void printarr(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
}
void mergesort(int arr[],int s,int e)
{
   if(s>=e)
   {
      return;
   }
   else
   {
      int mid=s+(e-s)/2;
      mergesort(arr,s,mid);
      mergesort(arr,mid+1,e);

      merge(arr,s,mid,e);
   }
}
int main()
{
   int arr[6]={9,8,7,5,6,4};
   int n=6;

   mergesort(arr,0,n-1);
   printarr(arr,n);
   

}