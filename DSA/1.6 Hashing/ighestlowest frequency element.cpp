#include <bits/stdc++.h>
using namespace std;

void find_highest_lowest_frequency(vector<int>& arr) {
    unordered_map<int, int> freq_map;

    // Traverse the array and update the frequency map
    for (int num : arr) {
        freq_map[num]++;
    }

    int highest_freq = 0, lowest_freq = INT_MAX;
    int highest_freq_elem, lowest_freq_elem;

    // Find the highest and lowest frequency elements
    for (auto& pair : freq_map) {
        if (pair.second > highest_freq) {
            highest_freq = pair.second;
            highest_freq_elem = pair.first;
        }
        if (pair.second < lowest_freq) {
            lowest_freq = pair.second;
            lowest_freq_elem = pair.first;
        }
    }

    cout << "Element with highest frequency: " << highest_freq_elem << " (appears " << highest_freq << " times)" << endl;
    cout << "Element with lowest frequency: " << lowest_freq_elem << " (appears " << lowest_freq << " times)" << endl;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    
    find_highest_lowest_frequency(arr);

    return 0;
}
