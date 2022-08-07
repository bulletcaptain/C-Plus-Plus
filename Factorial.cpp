#include <iostream>

using namespace std;
// The function to calculate the factorial of the number
int Factorial(int value)
{
    if (value > 0)
    {
        int number = value;
        int i, factorialNumber = 1;

        // if input is negative, display error message
        
            for (i = 1; i <= number; ++i)
            {
                factorialNumber *= i; // factorialNumber = factorialNumber*i;
            }
            cout << "the factorial for the input is: " << factorialNumber;
        
        return 0;
    }
    else
    {
        int number, i, factorialNumber = 1;
        cout << "Please insert positive number:";
        cin >> number;
        // if input is negative, display error message
        if (number < 0)
            cout << "Warning! Only accept positive value, Negative number don't have factorial";
        else
        {
            for (i = 1; i <= number; ++i)
            {
                factorialNumber *= i; // factorialNumber = factorialNumber*i;
            }
            cout << "the factorial for the input is: " << factorialNumber;
        }
        return 0;
    }
}
int main()
{
    //Initialized a value for the testing purpose
    int value = 5;
    Factorial(value);
}
