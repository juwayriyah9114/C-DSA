#include<iostream>
#include<string>
using namespace std;
void strdup(string str,string ans,int i,int map[26])
{
   if(i==str.length())
   {
      cout<<ans<<endl;
      return;
   }
   
      int mapindex=str[i]-'a';
      if(map[mapindex]==true)
      {
         strdup(str,ans,i+1,map);
      }
      else
      {
         ans=ans+str[i];
         map[mapindex]=true;
         strdup(str,ans,i+1,map);
      }
}
  

int main()
{
   string str="apnacollege";
   string ans="";
   int map[26]={false};
   strdup(str,ans,0,map);
}