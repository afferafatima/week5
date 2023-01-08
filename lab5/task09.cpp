#include <iostream>
using namespace std;
string output(int volume,int P1,int P2,float hours);
 main()
{
int volume,P1,P2;
float hours;
 
cout << "Enter the volume of pool in liter...[range of(1-10000)] : ";
cin >> volume;
cout << "Enter the flow rate of the first pipe per hour...[range of(1-5000)] : ";
cin >> P1;
cout << "Enter the flow rate of the second pipe per hour...[range of(1-5000)] : ";
cin >>P2;
cout << "Enter the hours that the worker is absent...[range of (1.0-24.00)] : ";
cin >>hours;

 int full=(((P1*hours)+(P2*hours))*100)/volume;
 int pipe1=(P1*100)/(P1+P2);
 int pipe2=100-pipe1;
if(full<volume)
{
cout<< "the pool is "<<full<<"% full."<<"pipe 1 : "<<pipe1<<"%. pipe 2 : "<<pipe2<<"%."<<endl;
}
if(full>volume)
{
 int overflow=((((P1*hours)+(P2*hours))*100)/volume)-volume;
 cout<< "For "<<hours<<" hours the pool overflows with "<<overflow<<" liters."<<endl;  
}
}
