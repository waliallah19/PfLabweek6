#include<iostream>
using namespace std;

string checktitle(int,char);
main()
{
 int age;
 char gender;
 string title;
 cout<<"Enter your age: ";
 cin>>age;
 cout<<"Enter your gender(M for Male and F for Female): ";
 cin>>gender;
 title = checktitle(age,gender);
 cout<<title;
}
string checktitle(int age, char gender)
{
 string gen;
 if(age>16 && gender == 'M')
  {
   gen = "Mr.";
  }
 else if(age<16 && gender == 'M')
  {
   gen = "Master";
  }
 else if(age>16 && gender == 'F')
  {
   gen = "Ms.";
  }
 else if(age<16 && gender == 'F')
  {
   gen = "Miss";
  }
 return gen;
}
