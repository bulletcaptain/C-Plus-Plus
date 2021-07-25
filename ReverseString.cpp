#include <iostream>
using namespace std;
//First method to reverse a string using for loop
void revStr1(string& str)
{
for (int i=str.length()-1; i>=0; i--)
cout << str[i];
cout << "\n";
}
//Second method to reverse a string using while loop
void revStr2(string& str)
{
int i=str.length();
while(i>=0)
{
cout <<str[i];
i--;
}
cout<<"\n";
}
//Third method to reverse a string using do while loop
void revStr3(string& str)
{
int i=str.length();
do
{
cout <<str[i];
i--;
}while(i>=0);
cout<<"\n";
}
// main program
int main()
{        string str = "Hello world";
cout <<"This is the string:"+ str+ "\n";
revStr1(str);
revStr2(str);
revStr3(str);
return 0;
}