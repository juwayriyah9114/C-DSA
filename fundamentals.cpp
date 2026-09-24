#include <iostream>
#include<vector>
#include<string>

using namespace std;

class user{
private:
   int id;
   string password;
public:
   string username;
user(int id)
{
   this->id = id;
}
//setters
void setpassword(string password)
{
   this->password = password;
}

//getters
string getPassword()
{
      return password;
 }
   

};

int main()
{
   user u1(007);
   u1.username = "juwayriyah";
   u1.setpassword("password123");
   cout << u1.getPassword() << endl;
   return 0;
}