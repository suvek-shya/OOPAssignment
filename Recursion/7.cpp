#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num, int i = 2) {
    if (num <= 1)
        return false;
    if (i * i > num)
        return true;
    if (num % i == 0)
        return false;
    return isPrime(num, i + 1);
}

// Recursive function to sum prime numbers in a range
int sumPrimes(int start, int end) {
    if (start > end)
        return 0;
    
    // Check if the current number is prime and add to sum if true
    int currentPrime = isPrime(start) ? start : 0;
    
    // Recursively sum prime numbers in the range
    return currentPrime + sumPrimes(start + 1, end);
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    int sum = sumPrimes(start, end);
    cout << "Sum of prime numbers between " << start << " and " << end << " is: " << sum << endl;
    
    return 0;
}
