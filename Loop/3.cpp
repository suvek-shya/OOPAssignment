#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, term = 1;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        sum += term;
        cout << term << " ";
        term = term * 10 + 1;
    }
    cout << "\nSum of series: " << sum << endl;
    return 0;
}
