#include<iostream>
using namespace std;
string condition(int value);
main()
{ 
  int value;
  string result;
  while(true)
  {
  cout << " ENTER YOUR NUMBER : ";
  cin >> value;
  
  result=condition(value);
  cout<<" YOUR VALUE IS : "<<result<<endl;  
 }
}   
   
string condition(int value)
{  
  int value2,value3,value4,value5;
  int a,b,c,d,e,sum;

  value2=value/10;
  value3=value/100;
  value4=value/1000;
  value5=value/10000;
  a=value%10;
  b=value2%10;
  c=value3%10;
  d=value4%10;
  e=value5%10;
  sum=a+b+c+d+e;

   if(sum%2==0)
    {
     return "evenish";
    }
    if(sum%2!=0)
    {
     return "oddish";
    }
   return 0;
}

