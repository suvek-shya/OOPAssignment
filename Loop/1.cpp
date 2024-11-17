#include <iostream>
using namespace std;

bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main()
{
    int start=1, end = 500;
    for (int i = start; i <= end; ++i)
    {
        if (isPerfect(i))
            cout << ""<< i << " ";
    }
    return 0;
}
