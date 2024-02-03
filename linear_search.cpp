#include <iostream>

using namespace std;

// Recursive linear search function
int recursiveLinearSearch(int arr[], int target, int index, int size) {
    // Base case: If the current index is out of bounds, return -1 (element not found)
    if (index >= size) {
        return -1;
    }
    
    // If the current element matches the target, return the index
    if (arr[index] == target) {
        return index;
    }
    
    // Recursive case: Search in the rest of the array
    return recursiveLinearSearch(arr, target, index + 1, size);
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
    
    int target;
    
    // Input the target element
    cout << "Enter the target element: ";
    cin >> target;
    
    int index = recursiveLinearSearch(arr, target, 0, size);
    
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    
    return 0;
}
