#include<iostream>
using namespace std;

float price(string,string,float);
main()
{
 float quantity,result;
 string city, product;
 cout<<"Enter the name of product: ";
 cin>>product;
 cout<<"Enter the city: ";
 cin>>city;
 cout<<"Enter the quantity of product: ";
 cin>>quantity; 
 result = price(city,product,quantity);
 cout<<result;
}
float price(string city,string product,float quantity)
{
 float p;
 if(city=="Sofia")
 {
  if(product == "Coffee")
   {
    p = quantity * 0.50;
   }
  else if(product == "Water")
   {
    p = quantity * 0.80;
   }
  else if(product == "Beer")
   {
    p = quantity * 1.20;
   }
  else if(product == "Sweets")
   {
    p = quantity * 1.45;
   }
  else if(product == "Peanuts")
   {
    p = quantity * 1.60;
   }
 }
 else if(city=="Plovdiv")
 {
  if(product == "Coffee")
   {
    p = quantity * 0.40;
   }
  else if(product == "Water")
   {
    p = quantity * 0.70;
   }
  else if(product == "Beer")
   {
    p = quantity * 1.15;
   }
  else if(product == "Sweets")
   {
    p = quantity * 1.30;
   }
  else if(product == "Peanuts")
   {
    p = quantity * 1.50;
   }
 }
 else if(city=="Varna")
 {
  if(product == "Coffee")
   {
    p = quantity * 0.45;
   }
  else if(product == "Water")
   {
    p = quantity * 0.70;
   }
  else if(product == "Beer")
   {
    p = quantity * 1.10;
   }
  else if(product == "Sweets")
   {
    p = quantity * 1.35;
   }
  else if(product == "Peanuts")
   {
    p = quantity * 1.55;
   }
 }
 return p;
}