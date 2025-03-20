// brute
#include <iostream>
#include <vector>
#include <algorithm> // For sorting
using namespace std;

class Solution {
public:
    bool divideArrayBruteForce(vector<int>& nums) {
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());
        
        // Step 2: Check consecutive pairs for equality
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums[i] != nums[i + 1]) { // If any pair is not equal, return false
                return false;
            }
        }
        return true;
    }
};


// better
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool divideArrayBetter(vector<int>& nums) {
        // Step 1: Create a frequency map
        unordered_map<int, int> freqMap;
        
        // Step 2: Count the frequency of each element
        for (int num : nums) {
            freqMap[num]++;
        }
        
        // Step 3: Check if all counts are even
        for (auto& entry : freqMap) {
            if (entry.second % 2 != 0) { // If any count is odd, return false
                return false;
            }
        }
        return true;
    }
};
// optimal
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool divideArrayOptimal(vector<int>& nums) {
        // Step 1: Create a fixed-size frequency array (since nums[i] <= 500)
        int freq[501] = {0};  // Array to store frequency of numbers 1 to 500
        
        // Step 2: Count the frequency of each element
        for (int num : nums) {
            freq[num]++;
        }
        
        // Step 3: Check if all frequencies are even
        for (int i = 1; i <= 500; i++) {
            if (freq[i] % 2 != 0) { // If any frequency is odd, return false
                return false;
            }
        }
        return true;
    }
};
