#include <iostream>
#include <bitset>
using namespace std;

string decimalToBinary(int num)
{
    return bitset<32>(num).to_string();
}

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary: " << decimalToBinary(num) << endl;
    return 0;
}
