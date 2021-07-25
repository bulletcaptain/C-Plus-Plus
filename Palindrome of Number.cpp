#include <iostream>  

using namespace std;  

int main()  {  
  
	int rev, sum = 0, temp; 
	//initialize a number for test case
	int number = 123321;   
	cout << "Tested number = " << number;
	
	//hole the number in temporary variable
	temp = number;
    
	while (number > 0)  {  
		//reverse the number
		rev = number % 10;    
		sum = (sum * 10) + rev;    
		number = number / 10;	
	}    
	
	//compare the temporary number with reversed number
	if(temp == sum)    
		//print palindrome number if both numbers are same
		cout << "\nNumber is Palindrome.";    
	else    
		//print non-palindrome number if both numbers are not same
		cout << "\nNumber is not Palindrome.";   
  
	return 0;  
}  
