//A buzz number is a number that is either divisble by 7 or has last digit as 7.
#include <iostream>
using namespace std;
int main()
{
  int in ,loopNum;
  cout << "How many times you want to run : ";
  cin >> loopNum;
  while(loopNum--)
  {
    cout << "Provide an input : ";
    cin >> in;
    if((in%7==0)||(in%10==7))
      cout << in << " is a buzz number" << endl;
    else
      cout << in << " is not a buzz number" << endl;
  }
  return 0;
}
