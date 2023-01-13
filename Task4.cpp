#include<iostream>
using namespace std;
string checking(float);
main()
{
 float speed;
 string status;
 cout<<"Enter your speed: ";
 cin>>speed;
 status = checking(speed);
 cout<<status;
}
string checking(float speed)
{
 string info;
 if(speed > 0 && speed <=10)
 {
  info = "Slow";
 }
if(speed > 10 && speed <=50)
 {
  info = "Average";
 }
if(speed > 50 && speed <=150)
 {
  info = "Fast";
 }
if(speed > 150 && speed <=1000)
 {
  info = "Ultra Fast";
 }
return info;
}