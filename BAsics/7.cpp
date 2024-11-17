
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int Factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * Factorial(n - 1);
}


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Validate input for non-negative integers
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; // Return with an error code for invalid input
    }

    int factorial = Factorial(num);
    cout << "...........Result......." << endl;
    cout << "The factorial of the input number " << num << " is: " << factorial << endl;

    return 0;
}
