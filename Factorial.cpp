#include<iostream>
using namespace std;
int main()
{
int number, i, factorialNumber = 1;
cout << "Please insert positive number:";
cin >> number;
// if input is negative, display error message
if (number< 0)
cout << "Warning! Only accept positive value, Negative number don't have factorial";
else
{
for(i = 1; i <= number; ++i)
{
factorialNumber*= i;  // factorialNumber = factorialNumber*i;
}
cout << "the factorial for the input is: " <<  factorialNumber;
}
return 0;
}