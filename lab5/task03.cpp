#include<iostream>

using namespace std;
bool isSymmetrical(int num);
main()
{  
  int num;
  bool isTrue; 
  while(true)
  {                                                          
  cout << "ENTER THREE DIGIT NUMBER : " ;
  cin >> num;
  
  isTrue=isSymmetrical(num);
  cout << "RESULT IS: " <<isTrue<< endl;
  }

}

bool isSymmetrical(int num)
{
  int num1;
  int num2;
  bool isTrue;
  num1=num%10;
  num2=num/100;

if(num1 == num2 )
{ 
  isTrue=true;
}
if(num1 != num2)
{
  isTrue=false;
}
return isTrue;
}