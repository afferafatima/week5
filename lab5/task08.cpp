#include<iostream>
using namespace std;
string output1(int value1);
string output2(int value1);
main()
{
while(true)
{
 int input,number1,number2;
 string no1,no2;
 cout << "Enter Your Number : ";
 cin>> input;
  number1=input/10; 
  number2=input%10;
  if(input>=10)
 {
  no1=output1(number1);
 }
  no2=output2(number2);
  cout<<no1<<" "<<no2<<endl;
}
}
string output1(int value1)
 {
 if(value1==1)
 {
 return "one";
 }
 if(value1==2)
 {
  return "twenty";
 }
  if(value1==3)
 {
  return "thirty";
 }
  if(value1==4)
 {
  return "fourty";
 }
  if(value1==5)
 {
  return "fifty";
 }
  if(value1==6)
 {
  return "sixty";
 }
  if(value1==7)
 {
  return "seventy";
 }
  if(value1==8)
 {
  return "eighty";
 }
  if(value1==9)
 {
  return "ninety";
 }
 return 0; 
}
string output2(int value2)
 {
  if(value2==0)
 {
  return " ";
 }
  if(value2==1)
 {
  return "one";
 }
  if(value2==2)
 {
  return "two";
 }
  if(value2==3)
 {
  return "three";
 } 
  if(value2==4)
 {
  return "four";
 }
  if(value2==5)
 {
  return "five";
 }
  if(value2==6)
 {
  return "six";
 }
  if(value2==7)
 {
  return "seven";
 }
  if(value2==8)
 {
  return "eight";
 }
  if(value2==9)
 {
  return "nine";
 }
return 0;
}
 