#include <bits/stdc++.h>
using namespace std;

// brute force approach - time complexity: O(nlogn) and space complexity: O(n)
int largestElement_brute(vector<int> array)
{
    sort(array.begin(), array.end());
    return array[array.size()-1];
}

// optimal approach - time complexity: O(n) and space complexity: O(1)
int largestElement_optimal(vector<int> array)
{
    int max = INT_MIN;
    for(int i=0; i<array.size(); i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    // size of array
    int array_size;
    cin>>array_size;

    // array elements
    vector<int> array(array_size);

    // input array elements
    for(int i=0; i<array_size; i++)
    {
        cin>>array[i];
    }

    // output largest element
    cout<<largestElement_brute(array);
    cout<<largestElement_optimal(array);
    return 0;
}