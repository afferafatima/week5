#include<iostream>
using namespace std;
int time(int hours,int mins);
main()
{
  int hours,mins;
  int mins1,hours1;
  while (true)
 {
 cout<< "ENTER HOURS : ";
 cin>> hours;
 cout<< " ENTER MINUTES : ";
 cin>> mins;
 
 if((mins+15)<=59)
 {
  mins1=mins+15;
  hours1=hours;
  cout << "TIME AFTER 15 MINS IS : "<<hours1<<":"<<mins1<<endl ;
 }
 if((mins+15)>=60)
 {
  mins1=(mins+15)-60;
  hours1=hours+1;
  if((hours+1)==24)
  {
  hours1=00;
  }
  cout << "TIME AFTER 15 MINS IS : "<<hours1<<":"<<mins1<<endl ; 
 } 
}
} 


  
 