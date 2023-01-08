#include<iostream>
using namespace std;
int x=30;
void myfunction()
{
cout<<"The vaue of x is : "<<x<<endl;
int x=20;
}
main()
{
myfunction();
int x=10;
cout<<"The vaue of x is : "<<x<<endl;
myfunction();

}