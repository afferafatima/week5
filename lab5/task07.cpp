#include<iostream>
#include<windows.h>
using namespace std;
string output(char input);
main()
{
char input;
while(true)
{
Sleep(0.01);
 cout<< "ENTER YOUR VALUE : ";
 cin >> input;
 string result=output(input);
 cout<<result<<endl;

}
}

string output(char input)
{
 if(input=='A')
 {
 return "You have entered capital A";
 }
  if(input=='a')
 {
 return "You have entered small a";
 }
return 0;
}