#include <iostream>

using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of the sorted subarray that are greater than the key
        // to the right by one position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int size;
    
    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    // Input array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    // Perform insertion sort
    insertionSort(arr, size);
    
    // Display the sorted array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
