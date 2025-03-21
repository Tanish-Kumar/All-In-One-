#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
vector<int> moveZerosBrute(int n, vector<int> a) {
    // temporary array:
    vector<int> temp;
    
    // Copy non-zero elements from original -> temp array
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }

    // Number of non-zero elements
    int nz = temp.size();

    // Copy elements from temp and fill the first nz fields of the original array
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    // Fill the rest of the cells with 0
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }
    return a;
}

// Optimal Two-Pointer Approach
vector<int> moveZerosOptimized(int n, vector<int> a) {
    int j = -1;
    
    // Place the pointer j
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    // No non-zero elements
    if (j == -1) return a;

    // Move the pointers i and j and swap accordingly
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;

    // Brute Force Approach
    vector<int> ansBrute = moveZerosBrute(n, arr);
    cout << "Brute Force: ";
    for (auto &it : ansBrute) {
        cout << it << " ";
    }
    cout << '\n';

    // Optimal Approach
    vector<int> ansOptimized = moveZerosOptimized(n, arr);
    cout << "Optimized Approach: ";
    for (auto &it : ansOptimized) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}
