#include <bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force (Iterative)
int gcdBruteForce(int A, int B) {
    int gcd = 1;
    for (int i = min(A, B); i >= 1; i--) {
        if (A % i == 0 && B % i == 0) {
            gcd = i;
            break;
        }
    }
    return gcd;
}

// Approach 2: Euclidean Algorithm (Best Approach)
int gcdEuclidean(int A, int B) {
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

// Approach 3: Using C++ STL __gcd() function
int gcdSTL(int A, int B) {
    return __gcd(A, B);
}

int main() {
    int A, B;
    // cout << "Enter two numbers: ";
    cin >> A >> B;

    cout << "GCD using Brute Force: " << gcdBruteForce(A, B) << endl;
    cout << "GCD using Euclidean Algorithm: " << gcdEuclidean(A, B) << endl;
    cout << "GCD using STL __gcd(): " << gcdSTL(A, B) << endl;

    return 0;
}
