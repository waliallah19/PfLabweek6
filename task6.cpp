#include<iostream>
using namespace std;

float lowestprice(int, string);
main()
{
 int distance;
 string time;
 cout<<"Enter the distance you want to travel in KMs: ";
 cin>> distance; 
 cout<<"Are you traveling during day or night: ";
 cin>>time;
 cout<<"Loweset cost is "<<lowestprice(distance, time);
}

float lowestprice(int distance, string time)
{
 float price,taxid,taxin,train,bus;
 if(distance < 20 && time == "Day")
 {
  taxid = distance * 0.79 + 0.70;
  return taxid;
 }
 else if(distance < 20 && time == "Night")
 {
  taxin = distance * 0.90 + 0.70;
  return taxin;
 }
 else if(distance > 20 && distance < 100 && time == "Day")
 {
  bus = distance * 0.09;
  taxid = distance * 0.79 + 0.70; 
   if(bus<taxid)
   return bus;
   else 
   return taxid;
 }
 else if(distance > 20 && distance < 100 && time == "Night")
 {
  bus = distance * 0.09;
  taxin = distance * 0.90 + 0.70;   
   if(bus<taxin)
   return bus;
   else 
   return taxin;
 }
else if(distance > 100 && time == "Day")
 {
  bus = distance * 0.09;
  taxid = distance * 0.79 + 0.70;  
  train = distance * 0.06;
   if(bus<taxid && bus <train)
   return bus;
   else if(taxid<bus && taxid<train)
   return taxid;
   else
   return train;
}
 else if(distance > 100 && time == "Night")
 {
  bus = distance * 0.09;
  taxin = distance * 0.90;   
  train = distance * 0.06; 
   if(bus<taxin && bus <train)
   return bus;
   else if(taxin<bus && taxin<train)
   return taxin;
   else
   return train;
 }
 
}