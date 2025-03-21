#include <bits/stdc++.h>
using namespace std;

// Approach 1: Using Map
vector<int> FindUnion_Map(int arr1[], int arr2[], int n, int m) {
    map<int, int> freq;
    vector<int> Union;

    for (int i = 0; i < n; i++) {
        freq[arr1[i]]++;
    }
    for (int i = 0; i < m; i++) {
        freq[arr2[i]]++;
    }
    for (auto &it : freq) {
        Union.push_back(it.first);
    }
    return Union;
}

// Approach 2: Using Set
vector<int> FindUnion_Set(int arr1[], int arr2[], int n, int m) {
    set<int> s;
    
    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }
    
    return vector<int>(s.begin(), s.end());
}

// Approach 3: Using Two Pointers (Optimized)
vector<int> FindUnion_TwoPointers(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    vector<int> Union;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (Union.empty() || Union.back() != arr1[i]) {
                Union.push_back(arr1[i]);
            }
            i++;
        } 
        else if (arr1[i] > arr2[j]) {
            if (Union.empty() || Union.back() != arr2[j]) {
                Union.push_back(arr2[j]);
            }
            j++;
        } 
        else {
            if (Union.empty() || Union.back() != arr1[i]) {
                Union.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (Union.empty() || Union.back() != arr1[i]) {
            Union.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m) {
        if (Union.empty() || Union.back() != arr2[j]) {
            Union.push_back(arr2[j]);
        }
        j++;
    }

    return Union;
}

int main() {
    int n, m;

    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout << "\nUnion using Map: ";
    vector<int> unionMap = FindUnion_Map(arr1, arr2, n, m);
    for (int val : unionMap) {
        cout << val << " ";
    }

    cout << "\nUnion using Set: ";
    vector<int> unionSet = FindUnion_Set(arr1, arr2, n, m);
    for (int val : unionSet) {
        cout << val << " ";
    }

    cout << "\nUnion using Two Pointers: ";
    vector<int> unionTP = FindUnion_TwoPointers(arr1, arr2, n, m);
    for (int val : unionTP) {
        cout << val << " ";
    }

    return 0;
}
