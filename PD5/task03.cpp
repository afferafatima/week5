#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
main()
{
 float vehicleprice;
 char vehicletype;
 cout<< "Enter vehicle price : ";
 cin>> vehicleprice;
 cout<< "Enter vehicle type : ";
 cin>> vehicletype;
 float output=taxCalculator(vehicletype,vehicleprice);
 cout<< " Final Price is "<<output<<endl;

}

float taxCalculator(char type,float price)
{
 if(type=='M')
 {
 float percent=(price*(0.06));
 price=price+percent; 
 return price;
 }
 if(type=='E')
 {
 float percent=(price*(0.08));
 price=price+percent; 
 return price;
 }
 if(type=='S')
 {
 float percent=(price*(0.1));
 price=price+percent; 
 return price;
 }
 if(type=='V')
 {
 float percent=(price*(0.12));
 price=price+percent; 
 return price;
 }
return 0;
}