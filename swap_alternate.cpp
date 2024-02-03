#include <bits/stdc++.h>
using namespace std;
 
// Utility function to print
// the contents of an array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
// Function to update the array
void UpdateArr(int arr[], int n)
{
 
    // Initialize the pointers
    int i = 0, j = n - 1;
 
    // While there are elements to swap
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
 
        // Update the pointers
        i += 2;
        j -= 2;
    }
 
    // Print the updated array
    printArr(arr, n);
}
 
// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    UpdateArr(arr, n);
 
    return 0;
}