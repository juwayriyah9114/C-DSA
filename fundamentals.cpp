
#include <iostream>
#include <climits>
   
using namespace std;
int height(int *occu,int n)
{
   int lmax[1000];
   int rmax[1000];
   lmax[0]=INT_MIN;
   rmax[n-1]=INT_MIN;
   for(int i=1;i<n;i++)
   {
      lmax[i]=max(lmax[i-1],occu[i-1]);
   }
   for(int i=1;i<n;i++)
   {
      rmax[i]=max(rmax[i-1],occu[n-i]);
   }
   int area=0;
   for(int i=1;i<n;i++)
   {
      area=area+min(lmax[i],rmax[i])-occu[i];
   }
   return area;
}
int main()
{
   int occu[7]={4,2,0,6,3,2,5};
   int n=sizeof(occu)/sizeof(int);

   int area=height(occu,n);
   cout<<area<<endl;
}