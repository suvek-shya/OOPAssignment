#include <iostream>
using namespace std;

int main()
{
    int a, d, n;
    cout << "Enter first term (a): ";
    cin >> a;
    cout << "Enter common difference (d): ";
    cin >> d;
    cout << "Enter number of terms (n): ";
    cin >> n;

    int sum = n * (2 * a + (n - 1) * d) / 2;
    cout << "Sum of A.P. series: " << sum << endl;
    return 0;
}
