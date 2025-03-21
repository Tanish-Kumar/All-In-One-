#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - O(n) Space
void leftRotateBrute(vector<int>& arr, int n) {
    vector<int> temp(n);
    for (int i = 1; i < n; i++) 
        temp[i - 1] = arr[i]; 
    temp[n - 1] = arr[0];
    
    arr = temp; // Copy back to original array
}

// Optimized Approach - O(1) Space
void leftRotateOptimized(vector<int>& arr, int n) {
    int temp = arr[0]; 
    for (int i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
    arr[n - 1] = temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& num : arr) cin >> num;

    vector<int> arrBrute = arr, arrOptimized = arr;

    leftRotateBrute(arrBrute, n);
    leftRotateOptimized(arrOptimized, n);

    cout << "Brute Force: ";
    for (int num : arrBrute) cout << num << " ";

    cout << "\nOptimized: ";
    for (int num : arrOptimized) cout << num << " ";

    return 0;
}
