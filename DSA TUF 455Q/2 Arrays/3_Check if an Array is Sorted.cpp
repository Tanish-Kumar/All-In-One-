#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - O(n^2) Time Complexity, Space Complexity: O(1)
bool isSortedBrute(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i])  // Check if any pair is out of order
                return false;
        }
    }
    return true;
}

// Optimized Approach - O(n) Time Complexity, Space Complexity: O(1)
bool isSortedOptimized(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])  // Check if the current element is smaller than the previous one
            return false;
    }
    return true;
}

int main() {
    // Input array size and elements from the user
    int n;
    // cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Declare the array based on input size
    // cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Brute Force Approach
    bool ansBrute = isSortedBrute(arr, n);
    cout << "Brute Force Approach: " << (ansBrute ? "True" : "False") << endl;

    // Optimized Approach
    bool ansOptimized = isSortedOptimized(arr, n);
    cout << "Optimized Approach: " << (ansOptimized ? "True" : "False") << endl;

    return 0;
}
