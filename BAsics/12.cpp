#include <iostream>
#include <cmath>
using namespace std;

int integerSquareRoot(int num)
{
    return static_cast<int>(sqrt(num));
}

int main()
{
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    cout << "Integer square root: " << integerSquareRoot(num) << endl;
    return 0;
}
