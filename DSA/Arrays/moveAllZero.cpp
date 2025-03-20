#include <iostream>
#include <vector>

void moveNonZeroToEnd(std::vector<int>& arr) {
    int n = arr.size();
    int count = 0; // Count of non-zero elements

    // Traverse the array. If element encountered is non-zero, then
    // replace the element at index 'count' with this element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // here count is incremented
        }
    }

    // Now all non-zero elements have been shifted to front and 'count' is set
    // as index of first 0. Make all elements 0 from count to end.
    while (count < n) {
        arr[count++] = 0;
    }
}

void printArray(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    moveNonZeroToEnd(arr);
    printArray(arr);
    return 0;
}