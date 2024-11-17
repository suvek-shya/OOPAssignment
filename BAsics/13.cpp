#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; ++i)
    {
        if (isPrime(i))
            count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of primes less than " << num << ": " << countPrimes(num) << endl;
    return 0;
}
