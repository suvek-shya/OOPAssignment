#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = num - 1; i > 1; --i)
    {
        if (isPrime(i))
        {
            cout << "Last prime before " << num << " is " << i << endl;
            break;
        }
    }
    return 0;
}
