#include <iostream>
#include<vector>
#include<string>

using namespace std;

class student{
   string name;
   float cgpa;
public:
void per()
{
   cout<<cgpa*10<<"%\n";
}

//setters
void setName(string newname)
{
   name=newname;
}
void setcgpa(float newcgpa)
{
   cgpa=newcgpa;
}
//getters
string getName()
{
      return name;
 }
   float getCgpa()
   {
      return cgpa;
   }

};

int main()
{
   student s1;
   s1.setName("riya");
   s1.setcgpa(9.5);
   s1.getName();
   s1.getCgpa();
   return 0;
}