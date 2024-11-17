#include <iostream>
using namespace std;

// Function to repeatedly sum the digits until a single-digit result is obtained
int digitSum(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Add last digit to sum
            num /= 10; // Remove last digit
        }
        num = sum; // Update num to the calculated sum
    }
    return num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1; // Return with an error code if input is invalid
    }

    cout << "Repeated Digit Sum: " << digitSum(num) << endl;
    return 0;
}
