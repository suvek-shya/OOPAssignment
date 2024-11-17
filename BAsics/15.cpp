#include <iostream>
using namespace std;

void findFactors(int num)
{
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors of " << num << ": ";
    findFactors(num);
    return 0;
}
