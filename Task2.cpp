#include<iostream>
using namespace std;


float discount(float , string , string);
main()
{
 float price;
 string day,month;
 float dis;
 cout<<"Enter your total amount: ";
 cin>>price;
 cout<<"Enter current month: ";
 cin>>month;  
 cout<<"Enter day: ";
 cin>>day;
 dis = discount(price,month,day);
 cout<<" Your payable amount is "<<dis; 
}
float discount(float price, string month, string day)
{
 float d;
 if(day == "Sunday" && month == "October" || month == "March" || month == "August")
  d = price - (0.1 * price);
 else if(day == "Monday" && month == "December" || month == "November")
  d = price - (0.1 * price);
 else
   d = price;
 return d;
} 