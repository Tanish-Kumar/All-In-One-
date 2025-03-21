#include <iostream>
using namespace std;

int search(int arr[], int n, int num) {
    // Loop through the array to find the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int n, num;

    // Taking user input for array size
    // cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Checking if the array size is valid
    if (n <= 0) {
        // cout << "Array size must be greater than zero." << endl;
        return 0;
    }

    int arr[n];  // Declare an array of size n

    // Taking user input for array elements
    // cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Taking user input for the number to search
    // cout << "Enter the number to search: ";
    cin >> num;

    // Calling search function
    int result = search(arr, n, num);

    // Output result
    if (result != -1) {
        cout << "Element " << num << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << num << " not found in the array." << endl;
    }

    return 0;
}
