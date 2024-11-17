#include <iostream>
using namespace std;

int productOfDigits(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Product of digits: " << productOfDigits(num) << endl;
    return 0;
}
