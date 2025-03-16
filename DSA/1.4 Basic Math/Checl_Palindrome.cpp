#include <bits/stdc++.h>
using namespace std;

// Approach 1: Reverse and Compare (Mathematical Approach)
bool isPalindromeReverse(int N) {
    if (N < 0) return false; // Negative numbers are not palindromes

    int original = N;
    long long reversedNum = 0;

    while (N > 0) {
        int lastDigit = N % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        N /= 10;
    }

    return original == reversedNum; // Check if reversed is same as original
}

// Approach 2: Convert to String and Reverse
bool isPalindromeString(int N) {
    string s = to_string(N);
    string rev = s;
    reverse(rev.begin(), rev.end());  // Reverse the string
    return s == rev;  // Check if same as original
}

int main() {
    int N;
    // cout << "Enter a number: ";
    cin >> N;

    cout << "Using Reverse and Compare: " << (isPalindromeReverse(N) ? "true" : "false") << endl;
    cout << "Using String Reversal: " << (isPalindromeString(N) ? "true" : "false") << endl;

    return 0;
}
