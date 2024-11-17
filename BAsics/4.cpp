
#include <iostream>
using namespace std;

int Addup(int n)
{
    int SumOfNumbers = 0;
    while (n > 0)
    {
        SumOfNumbers += n % 10;
        n /= 10;
    }
    return SumOfNumbers;
}

int main()
{
    int start = 11, end = 16, sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += Addup(i);
    }

    cout << "Add up all the digits between "<<start<<" and "<<end<< " is: "<< sum << endl;

    return 0;
}