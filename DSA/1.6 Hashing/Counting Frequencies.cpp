#include <bits/stdc++.h>
using namespace std;

void count_frequencies(vector<int>& arr) {
    unordered_map<int, int> freq_map;

    // Traverse the array and update the frequency map
    for (int num : arr) {
        freq_map[num]++;
    }

    // Print frequencies of each element
    for (auto& pair : freq_map) {
        cout << "Element " << pair.first << " appears " << pair.second << " times." << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    
    cout << "Frequency of elements in the array:" << endl;
    count_frequencies(arr);

    return 0;
}
