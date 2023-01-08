#include<iostream>
#include <cmath>
using namespace std;
float addition(float b,float squareroot,float a);
float subtraction(float b,float squareroot,float a);

main()
{
	float a;
 	float b;
	float c;
	float ans;
        while(true)
	{
	cout<< "Enter coefficient of x^2: " ;
	cin >> a;
	cout<< "Enter coefficient of x: " ;
	cin >> b;
	cout<< "Enter constant : " ;
	cin >> c;
	float b2=pow(b,2);
	float underroot=b2-4*(a*c);
	float squareroot=sqrt(underroot);
	ans=addition(b,squareroot,a);
	cout<< "answer is : "<<  ans << endl;
	ans=subtraction(b,squareroot,a);
	cout<< "answer is : "<<  ans << endl;
	}


}

float addition(float b,float squareroot,float a)
{
        float ans1=(-b+squareroot)/(2*a);
        return ans1;

}
float subtraction(float b,float squareroot,float a)
{
        float ans2=(-b-squareroot)/(2*a);
        return ans2;

}
  