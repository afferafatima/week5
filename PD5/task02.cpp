#include<iostream>
using namespace std;
void conversion(float volume,string unit);

main()
{
float length;
float width;
float height;
string unit;
cout << " Enter Length : ";
cin>> length;
cout<< " Enter width : ";
cin>> width;
cout<< " Enter height : ";
cin>> height;
cout<< " Enter unit(millimeters,centimeters,meters,kilometers) : ";
cin>> unit;
float volume=(length*width*height)/3;
conversion(volume,unit);

}

void conversion(float volume,string unit)
{ 

if(unit=="centimeters")
{
 cout<<"your ans is "<<volume*1000000<<"cubic centimeters"<<endl;

}
if(unit=="kilometers")
{
 cout<<"your ans is "<<volume*0.000000001<<"cubickilometers"<<endl;

}
if(unit=="millimeters")
{
 cout<<"your ans is "<<volume*1000000000<<"cubic millimeters"<<endl;

}
if(unit=="meters")
{
 cout<<"your ans is "<<volume<<"meters"<<endl;

}
}