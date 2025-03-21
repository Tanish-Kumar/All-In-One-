#include <bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force - O(N²)
int missingNumberBruteForce(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) return i;
    }
    return -1;
}

// Approach 2: Hashing - O(N) Time, O(N) Space
int missingNumberHashing(int arr[], int n) {
    vector<int> hash(n + 1, 0);
    
    for (int i = 0; i < n - 1; i++) {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) return i;
    }
    return -1;
}

// Approach 3: Summation Formula - O(N) Time, O(1) Space
int missingNumberSummation(int arr[], int n) {
    int sum_N = (n * (n + 1)) / 2;
    int sum_arr = accumulate(arr, arr + n - 1, 0);
    return sum_N - sum_arr;
}

// Approach 4: XOR Method - O(N) Time, O(1) Space
int missingNumberXOR(int arr[], int n) {
    int xor1 = 0, xor2 = 0;

    for (int i = 1; i <= n; i++) xor1 ^= i;
    for (int i = 0; i < n - 1; i++) xor2 ^= arr[i];

    return xor1 ^ xor2;
}

int main() {
    int n;
    // cout << "Enter N: ";
    cin >> n;

    int arr[n - 1];
    // cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing Number (Brute Force)    : " << missingNumberBruteForce(arr, n) << endl;
    cout << "Missing Number (Hashing)        : " << missingNumberHashing(arr, n) << endl;
    cout << "Missing Number (Summation)      : " << missingNumberSummation(arr, n) << endl;
    cout << "Missing Number (XOR)            : " << missingNumberXOR(arr, n) << endl;

    return 0;
}
