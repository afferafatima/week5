#include<iostream>
#include <cmath>
using namespace std;



main()
{
	float num1;
	float num2;
	float power;
	float cuberoot;
	float squareroot;
	float roundnext;
	float roundback;
	float maximum;
	float minimum;
	cout<<"Enter value1 : ";
	cin>> num1;	
	cout<<"Enter value2 : ";
	cin>> num2;
	minimum = min(num1,num2);
	cout << minimum << " is minimum."<< endl;
	maximum = max(num1,num2);
	cout << maximum << " is maximum."<< endl;
        power=pow(num1,num2);
	cout << num1 << " raised to the power " << num2 << " is " <<power<< endl;
	squareroot=sqrt(num1);
	cout << " Square root of " <<num1<< " is "<<squareroot<< endl;
	squareroot=sqrt(num2);
	cout << " Square root of " <<num2<< " is "<<squareroot<< endl;
	cuberoot=cbrt(num1);
	cout << " Cubee root of " <<num1<< " is "<<cuberoot<< endl;
	cuberoot=cbrt(num2);
	cout << " Cube root of " <<num2<< " is "<<cuberoot<< endl;
	roundnext=ceil(num1);
	cout<<"rounded off to " << roundnext << endl;
	roundback=floor(num1);
	cout<<"rounded off to " << roundback << endl;


}