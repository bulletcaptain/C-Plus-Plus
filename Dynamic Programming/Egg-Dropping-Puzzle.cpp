/* Function to get minimun number of trials needed 
 * in worst case with n eggs and k floors 
 */

#include <bits/stdc++.h>
using namespace std;
 
// A utility function to get maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int eggDrop(int n, int k)
{
    // If floor = 0, trial =0
    // If floor = 1, trial=1
    if (k == 1 || k == 0)
        return k;
 
    //If egg = 1, k trials for k floors
    if (n == 1)
        return k;
 
    int min = INT_MAX, x, res;
    //Let all drop from 1st=>kth floor return min value+1
    for (x = 1; x <= k; x++) {
        res = max(
            eggDrop(n - 1, x - 1),
            eggDrop(n, k - x));
        if (res < min)
            min = res;
    }
 
    return min + 1;
}
 

int main()
{
    //Let n = number of eggs;
    //Let k = number of floors
    int n,k;
    //Prompt for number of eggs and floors
    cout<<"Enter number of eggs:";
    cin>>n;
    cout<<"Enter the number of floors:";
    cin>>k;
    cout << "Minimum number of trials in worst case with "
         << n << " eggs and " 
         << k<< " floors is "
         << eggDrop(n, k) << endl;
    return 0;
}
 
