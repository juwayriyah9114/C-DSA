
#include <iostream>
#include <climits>
   
using namespace std;
int height(int *occu,int n)
{
   int lmax[1000];
   int rmax[1000];
   lmax[0]=occu[0];
   rmax[n-1]=occu[n-1];
   for(int i=1;i<n;i++)
   {
      lmax[i]=max(lmax[i-1],occu[i-1]);
   }
   for(int i=n-2;i>=0;i--)
   {
      rmax[i]=max(rmax[i+1],occu[i+1]);
   }
   int area=0;
   for(int i=0;i<n;i++)
   {
      int currw=min(lmax[i],rmax[i])-occu[i];
      if(currw>0)
      {
         area+=currw;
      }
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