#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Main function
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Validate input for non-negative integers
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; // Return with an error code for invalid input
    }

    int result = factorial(n);
    cout << "Result: " << endl;
    cout << "The factorial of the input number " << n << " is: " << result << endl;

    return 0;
}

