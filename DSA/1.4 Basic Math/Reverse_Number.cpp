#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int N) {
    bool isNegative = (N < 0);
    N = abs(N);  // Work with positive number

    long long reversedNum = 0;
    while (N > 0) {
        int lastDigit = N % 10;  // Extract last digit
        reversedNum = reversedNum * 10 + lastDigit;  // Append to reversedNum
        N /= 10;  // Remove last digit
    }

    if (isNegative) reversedNum *= -1;  // Restore sign

    return (reversedNum < INT_MIN || reversedNum > INT_MAX) ? 0 : reversedNum; // Handle overflow
}
int reverseNumber_stringReversal(int N) {
    string s = to_string(N);
    bool isNegative = (s[0] == '-');

    if (isNegative) reverse(s.begin() + 1, s.end());  // Reverse excluding '-'
    else reverse(s.begin(), s.end());

    long long reversedNum = stoll(s);  // Convert back to integer
    return (reversedNum < INT_MIN || reversedNum > INT_MAX) ? 0 : reversedNum; // Handle overflow
}

int main() {
    int N;
    cin >> N;
    cout << reverseNumber(N) << endl;
    cout << reverseNumber_stringReversal(N) << endl;
    return 0;
}
