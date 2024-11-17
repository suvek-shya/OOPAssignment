

#include <iostream>
using namespace std;

int main()
{
    int num1 = 30, num2 = 10;
    cout << "The value of variables before swapping num1 and num2 are: " << num1 << " and " << num2 << endl;

    num1 *= num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    cout << "The value of variables after swapping is num1: " << num1 << " and " << "num2: " << num2 << endl;
    return 0;
}