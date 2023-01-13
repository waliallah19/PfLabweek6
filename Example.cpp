#include<iostream>
using namespace std;

int isgreatest(int,int,int);
main()
{
 int a,b,c,r;
 cout<<"Enter 1st digit: ";
 cin>>a; 
 cout<<"Enter 2nd digit: ";
 cin>>b;
 cout<<"Enter 3rd digit: ";
 cin>>c;
 r = isgreatest(a,b,c);
 cout<<r<<" is the greatest of all.";
}

int isgreatest(int a,int b,int c)
{
 int res;
 if(a>b && a>c)
 {
  res = a;
 }
 else if(b>a && b>c)
 {
  res = b;
 }
 else if(c>a && c>b)
 {
  res = c;
 }
  return res;
}
