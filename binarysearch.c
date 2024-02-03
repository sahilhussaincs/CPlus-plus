#include <iostream>

using namespace std;

// Recursive binary search function
int recursiveBinarySearch(int arr[], int target, int left, int right) {
    // Base case: If the left index is greater than the right index, the element is not found.
    if (left > right) {
        return -1;
    }
    
    // Calculate the middle index
    int mid = left + (right - left) / 2;
    
    // If the middle element is equal to the target, return its index
    if (arr[mid] == target) {
        return mid;
    }
    
    // If the target is less than the middle element, search in the left subarray
    if (arr[mid] > target) {
        return recursiveBinarySearch(arr, target, left, mid - 1);
    }
    
    // If the target is greater than the middle element, search in the right subarray
    return recursiveBinarySearch(arr, target, mid + 1, right);
}

int main() {
    int size;
    
    // Input the size of the sorted array
    cout << "Enter the size of the sorted array: ";
    cin >> size;
    
    int *arr = new int[size]; // Dynamic memory allocation
    
    // Input sorted array elements
    cout << "Enter the sorted elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    int target;
    
    // Input the target element to search for
    cout << "Enter the target element: ";
    cin >> target;
    
    int index = recursiveBinarySearch(arr, target, 0, size - 1);
    
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    
    delete[] arr; // Free allocated memory
    
    return 0;
}
