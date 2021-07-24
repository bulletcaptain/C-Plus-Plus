#include <iostream>  

using namespace std;  

int main()  {  
  
	int input, rev, sum = 0, temp; 
	
	//prompt user to input a number to check if it's palindrome
	cout << "Enter the Number = " ;    
	cin >> input;    
	//hole the number in temporary variable
	temp = input;
    
	while (input > 0)  {  
		//reverse the number
		rev = input % 10;    
		sum = (sum * 10) + rev;    
		input = input / 10;	
	}    
	
	//compare the temporary number with reversed number
	if(temp == sum)    
		//print palindrome number if both numbers are same
		cout << "Number is Palindrome.";    
	else    
		//print non-palindrome number if both numbers are not same
		cout << "Number is not Palindrome.";   
  
	return 0;  
}  
