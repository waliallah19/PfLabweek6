#include<iostream>
using namespace std;

char gr(int);
main()
{
 int marks;
 char grade;
 cout<<"Enter your marks: ";
 cin>>marks;
 grade = gr(marks);
 cout<<grade<<" is your grade";
}
char gr(int m)
{
 char g;
 if(m<50)
 {
  g = 'F';
 }
 else if(m>50 && m<61)
  {
   g = 'E';
  }
 else if(m>60 && m<71)
  {
   g = 'D';
  }
else if(m>70 && m<81)
  {
   g = 'C';
  }
else if(m>80 && m<86)
  {
   g = 'B';
  }
 else if(m>86 && m<101)
  {
   g = 'A';
  }
 return g;
}