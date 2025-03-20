#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution solution;
    cout << solution.sum(12, 5) << endl;  // Output: 17
    cout << solution.sum(-10, 4) << endl; // Output: -6
    return 0;
}
