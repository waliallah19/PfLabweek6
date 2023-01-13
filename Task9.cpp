#include<iostream>
#include<cmath>
using namespace std;

float calculation(string, float);
main()
{
 float p,h,result;
 string leap;
 cout<<"Enter the word leap for leap year or normal for normal year: ";
 cin>>leap;
 cout<<"Enter count of holidays: ";
 cin>>p;
 cout<<"Enter count of weekends: ";
 cin>>h;
 result = calculation(leap,p);
 result = ceil(result);
 cout<<result;
}
float calculation(string leap, float p)
{
 float time;
 time = 36 + (2.0/3.0 * p);
 if(leap == "leap")
 {
  time = time + (0.15*time)-1;
 }
 return time;
}