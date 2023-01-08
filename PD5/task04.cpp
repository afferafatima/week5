#include<iostream>
#include<cmath>
using namespace std;

main()
{
 int neededhours,days,workers;
 cout<<"Enter needed hours : ";
 cin>>neededhours;
 cout<<"Enter days that firm has : ";
 cin>>days;
 cout<<"Enter number of all workers : ";
 cin>>workers;

 float daysleft=days-(days*(0.1));
 float totalhours=10*daysleft*workers;
 float hours1=floor(totalhours);
 if(hours1>neededhours)
 { 
 cout<<"yes!"<<hours1-neededhours<<"hours left";
 }
 if(hours1<neededhours)
 { 
 cout<<"not enough time!"<<neededhours-hours1<<" hours needed.";
 }

}


