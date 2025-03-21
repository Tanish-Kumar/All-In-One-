#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach (Sorting)
int secondSmallest_brute(int arr[], int n)
{
    if(n < 2) return -1;  // Edge case
    sort(arr, arr + n);
    return arr[1];  // Second smallest
}

int secondLargest_brute(int arr[], int n)
{
    if(n < 2) return -1;  // Edge case
    sort(arr, arr + n);
    return arr[n - 2];  // Second largest
}

// Better Approach (Using min/max functions)
void getElementsBetter(int arr[], int n)
{
    if(n < 2) 
    {
        cout << -1 << " " << -1 << endl;  // Edge case
        return;
    }

    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if(arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

// Optimal Approach (Single pass using INT_MAX and INT_MIN)
void getElementsOptimal(int arr[], int n)
{
    if(n < 2)
    {
        cout << -1 << " " << -1 << endl;  // Edge case
        return;
    }

    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    for(int i = 0; i < n; i++) 
    {
        if(arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }

        if(arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

int main()
{
    // Input array size
    int n;
    // cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input array elements
    int arr[n];
    // cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // Brute Force Approach
    int sS_brute = secondSmallest_brute(arr, n);
    int sL_brute = secondLargest_brute(arr, n);
    // cout << "Brute Force - Second smallest: " << sS_brute << ", Second largest: " << sL_brute << endl;

    // Better Approach
    getElementsBetter(arr, n);

    // Optimal Approach
    getElementsOptimal(arr, n);

    return 0;
}
