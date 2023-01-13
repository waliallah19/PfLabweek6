#include<iostream>
using namespace std;

float income(string, float, float);
main()
{
 float rows,columns;
 string screen;
 cout<<"Enter rows of the hall: ";
 cin>>rows;
 cout<<"Enter columns of the hall: ";
 cin>>columns;
 cout<<"Enter screen type: ";
 cin>>screen;
 cout<<income(screen, rows, columns)<<" is the total income."; 
}
float income(string screen, float rows, float columns)
{
 float profit;
 float seats;
 seats = rows*columns;
 if(screen == "Discounted")
 {
  profit = 5.0 * seats;
 }
if(screen == "Normal")
 {
  profit = 7.50 * seats;
 }
if(screen == "Premire")
 {
  profit = 12.0 * seats;
 }
return profit;
}