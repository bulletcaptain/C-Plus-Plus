// Bogo Sort, where the values in an array is randomly shuffled around to check
// whether the array is sorted or not. 
// If it is not sorted, shuffle the array again.

#include <iostream>

using namespace std;

// Check whether content of array is sorted in ascending order
bool sorted(int arr[], int b)
{
    for (int i = 1; i < b; i++) {
        if (arr[i] < arr[i-1])
            return false;
    }
    return true;
}

// Shuffle the contents of array
void shuffle(int arr[], int b)
{
    for (int i = 0; i < b; i++)
        swap(arr[i], arr[rand() % b]);
}

// Sorts array using bogosort
int bogosort(int arr[], int b)
{
    int i = 0;
    while (!sorted(arr, b))
    {
        shuffle(arr, b);
    }
    return i;
}

// Display the contents of array
void display(int arr[], int b)
{
    for (int i = 0; i < b; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// test case with a small number list
int main()
{
    int arr[] = { 3, 2, 10, 5, 9, 5 };
    int b = sizeof arr / sizeof arr[0];
    printf("Initial array: ");
    display(arr, b);
    bogosort(arr, b);
    printf("Sorted array : ");
    display(arr, b);
    return 0;
}