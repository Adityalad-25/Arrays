// Problem Statement
// Suggest Edit
// Given an integer ‘n’, return first n Fibonacci numbers using a generator function.


// Example:
// Input: ‘n’ = 5

// Output: 0 1 1 2 3

// Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>fib(n);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}


