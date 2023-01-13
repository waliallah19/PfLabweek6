#include<iostream>
using namespace std;

float calculation(float,float);
main()
{
 float budget,people;
 float result,required,diff;
 string category;
 cout<<"Enter your budget: ";
 cin>>budget;
 cout<<"Enter the category of seats: ";
 cin>>category;
 cout<<"Enter number of people: "; 
 cin>>people;
 result = calculation(budget,people); 
 if(category == "VIP")
 {
  required = people * 499.99;  
 }
 else if(category == "Normal")
 {
  required = people * 249.99;  
 } 
 if(required<result)
  { 
   diff = result - required; 
   cout<<"Yes! You have " <<diff<<" QR left.";
  }
  else
  {
   diff = required - result;
   cout<<"Not enough money! You need "<<diff<<" QR more.";
  }
}
float calculation(float budget,float people)
{
 float left;
 if(people  > 0 && people < 5)
  {
   left = budget - (0.75 * budget);
  }
 else if(people > 4 && people < 10)
  {
   left = budget - (0.60 * budget);
  }
 else if(people > 9 && people < 25 )
  {
   left = budget - (0.50 * budget);
  }
 else if(people > 24 && people < 50)
  {
   left = budget - (0.40 * budget);
  }
 else if(people > 49)
  {
   left = budget - (0.25 * budget);
  }
return left;
}