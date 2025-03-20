#include <bits/stdc++.h>
using namespace std;

// Set MAX_N large enough to store first 100000 primes
const int MAX_N = 1500000; 
vector<int> primes; // Vector to store prime numbers

// Function to compute prime numbers using Sieve of Eratosthenes
void generatePrimes() {
    vector<bool> isPrime(MAX_N, true); // Initialize a boolean array to mark primes
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes

    // Sieve of Eratosthenes to find all primes up to MAX_N
    for (int i = 2; i < MAX_N; i++) {
        if (isPrime[i]) {
            primes.push_back(i); // Add prime number to the list
            // Mark all multiples of i as non-prime
            for (int j = 2 * i; j < MAX_N; j += i) {
                isPrime[j] = false; 
            }
        }
    }
}

int main() {
    // Precompute primes
    generatePrimes();

    int N; // Variable to store input N
    cin >> N; // Read the position of the prime number (1-based indexing)

    // Output the square of the N-th prime number
    cout << 1LL * primes[N - 1] * primes[N - 1] << endl; // 1LL ensures safe multiplication for large numbers

    return 0;
}
