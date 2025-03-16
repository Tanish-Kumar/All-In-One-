#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    // Base case
    if (n <= 1) {
        return n;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to calculate sum of first n natural numbers
int sum_of_natural_numbers(int n) {
    // Base case
    if (n == 0) {
        return 0;
    }
    // Recursive case
    return n + sum_of_natural_numbers(n - 1);
}

// Recursive function to calculate power of a number
int power(int x, int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    // Recursive case
    return x * power(x, n - 1);
}

// Recursive function to reverse a string
string reverse_string(string str) {
    // Base case: when string length is 1 or empty
    if (str.length() <= 1) {
        return str;
    }
    // Recursive case: reverse the rest of the string and append the first character
    return reverse_string(str.substr(1)) + str[0];
}

// Recursive function to print something N times
void print_something_n_times(int n, const string& word) {
    // Base case: if n reaches 0, stop recursion
    if (n == 0) {
        return;
    }
    // Print the word and recurse
    cout << word << endl;
    print_something_n_times(n - 1, word);
}

// Recursive function to print name N times
void print_name_n_times(int n, const string& name) {
    // Base case: if n reaches 0, stop recursion
    if (n == 0) {
        return;
    }
    // Print the name and recurse
    cout << name << endl;
    print_name_n_times(n - 1, name);
}

// Recursive function to print numbers from 1 to N
void print_1_to_n(int n) {
    // Base case: if n is 0, stop recursion
    if (n == 0) {
        return;
    }
    // Recurse before printing to print in order from 1 to N
    print_1_to_n(n - 1);
    cout << n << " ";
}

// Recursive function to print numbers from N to 1
void print_n_to_1(int n) {
    // Base case: if n is 0, stop recursion
    if (n == 0) {
        return;
    }
    // Print the number and recurse
    cout << n << " ";
    print_n_to_1(n - 1);
}

// Recursive function to check if a string is palindrome
bool is_palindrome(string str) {
    // Base case: if the string length is 0 or 1, it's a palindrome
    if (str.length() <= 1) {
        return true;
    }
    // If the first and last characters don't match, it's not a palindrome
    if (str[0] != str[str.length() - 1]) {
        return false;
    }
    // Recurse with the substring excluding the first and last characters
    return is_palindrome(str.substr(1, str.length() - 2));
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    cout << "Enter a number to find its Fibonacci: ";
    cin >> num;
    cout << "Fibonacci of " << num << " is: " << fibonacci(num) << endl;

    cout << "Enter a number to calculate the sum of first n natural numbers: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers is: " << sum_of_natural_numbers(num) << endl;

    int x, n;
    cout << "Enter a base number and an exponent to calculate power: ";
    cin >> x >> n;
    cout << x << " raised to the power of " << n << " is: " << power(x, n) << endl;

    string str;
    cout << "Enter a string to reverse: ";
    cin >> str;
    cout << "Reversed string is: " << reverse_string(str) << endl;

    cout << "Enter a number to print something N times: ";
    cin >> num;
    cout << "Printing 'Hello' " << num << " times:" << endl;
    print_something_n_times(num, "Hello");

    cout << "Enter a number to print your name N times: ";
    cin >> num;
    cout << "Printing your name " << num << " times:" << endl;
    print_name_n_times(num, "John");

    cout << "Enter a number to print 1 to N: ";
    cin >> num;
    cout << "Printing numbers from 1 to " << num << ":" << endl;
    print_1_to_n(num);

    cout << endl;

    cout << "Enter a number to print N to 1: ";
    cin >> num;
    cout << "Printing numbers from " << num << " to 1:" << endl;
    print_n_to_1(num);

    cout << endl;

    cout << "Enter a string to check if it's a palindrome: ";
    cin >> str;
    if (is_palindrome(str)) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
