#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - O(n log n) (Sorting) + O(n) (Unique Copy)
int removeDuplicatesBrute(vector<int>& arr) {
    set<int> s(arr.begin(), arr.end()); // Store unique elements
    arr.assign(s.begin(), s.end());     // Copy back to the array
    return arr.size();
}

// Optimized Two-Pointer Approach - O(n)
int removeDuplicatesOptimized(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; // New array size after removing duplicates
}

int main() {
    // Input the size of the array
    int n;
    // cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    // cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Brute Force Approach
    vector<int> arrBrute = arr; // Copy original array for fair comparison
    int sizeBrute = removeDuplicatesBrute(arrBrute);
    // cout << "Brute Force Approach (After Removing Duplicates): ";
    for (int i = 0; i < sizeBrute; i++) {
        cout << arrBrute[i] << " ";
    }
    cout << endl;

    // Optimized Approach
    vector<int> arrOptimized = arr; // Copy original array for fair comparison
    int sizeOptimized = removeDuplicatesOptimized(arrOptimized);
    // cout << "Optimized Approach (After Removing Duplicates): ";
    for (int i = 0; i < sizeOptimized; i++) {
        cout << arrOptimized[i] << " ";
    }
    cout << endl;
    return 0;

    // clean and concise version
    /* 
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& num : arr) cin >> num;

    vector<int> arrBrute = arr, arrOptimized = arr;

    cout << "Brute Force: ";
    for (int i = 0, sizeBrute = removeDuplicatesBrute(arrBrute); i < sizeBrute; i++)
        cout << arrBrute[i] << " ";
    
    cout << "\nOptimized: ";
    for (int i = 0, sizeOptimized = removeDuplicatesOptimized(arrOptimized); i < sizeOptimized; i++)
        cout << arrOptimized[i] << " ";
    */
}
