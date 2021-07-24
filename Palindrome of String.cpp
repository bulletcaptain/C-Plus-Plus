#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char string1[20];
    int i, length;
    //initialize flag to false (0)
    int flag = 0;
    
    //prompt user to enter a string
    cout << "Enter a string: "; cin >> string1;
    
    //get the length of the string input
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        //perform comparision 
        if(string1[i] != string1[length-i-1]){
            // flag set to true(1) if the characters are same
            flag = 1;
            break;
   }
}
    
    if (flag) {
        //print non-palindrome result if flag = 0
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        //print palindrome result if flag = 1
        cout << string1 << " is a palindrome" << endl; 
    }
    
    return 0;
}
