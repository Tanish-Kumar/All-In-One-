#include <bits/stdc++.h>
using namespace std;

// Function to calculate the minimum operations required to make the array not sorted
long long min_operations_to_unsort(long long n, long long a[]) {
    long long operations = INT_MAX; // Initialize operations to a large value
    for (int i = 0; i < n - 1; i++) // Loop through the array elements, except the last one
    {
        // Check if the array is sorted in non-decreasing order at position i
        if (a[i] <= a[i + 1]) 
        {
            long long diff = a[i + 1] - a[i]; // Calculate the difference between consecutive elements
            long long required_operations = diff / 2 + 1; // Calculate required operations to break the sorted order
            operations = min(operations, required_operations); // Track the minimum required operations
        }
        else // If the array is already unsorted, no operations are needed
        {
            operations = 0;
            break; // Exit early, no further operations needed
        }
    }
    return operations; // Return the minimum operations
}

int main() {
    int t;
    cin >> t; // Input number of test cases
    while (t--) // Iterate over each test case
    {
        long long n;
        cin >> n; // Input the length of the array
        long long a[n]; // Declare the array of size n
        for (int i = 0; i < n; i++) // Input array elements
            cin >> a[i];

        long long result = min_operations_to_unsort(n, a); // Get the result by calling the function
        cout << result << endl; // Output the minimum operations for the current test case
    }
    return 0;
}

// Time complexity: O(n) for each test case, where n is the length of the array
