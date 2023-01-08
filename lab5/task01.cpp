#include<iostream>
#include <cmath>
using namespace std;

float calculateheight(float base,float degrees);

main()
{
	float base;
	float degrees;
	float height;
	cout << "Enter angle of elevation : " ;
	cin>>degrees;
	cout << "Enter base : " ;
	cin>>base;
	height=calculateheight(base,degrees);
	cout<< "height is " << height << endl;
}

float calculateheight(float base,float degrees)
  { 
	float radian=57.2958;
	float radians;
	radians=degrees/radian;
	float distance=tan(radians)*base;
	return distance;
 }
	
