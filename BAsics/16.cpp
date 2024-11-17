#include <iostream>
#include <bitset>
using namespace std;

string onesComplement(string binary)
{
    for (int i = 0; i < binary.size(); i++)
    {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    return binary;
}

int main()
{
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "One's complement: " << onesComplement(binary) << endl;
    return 0;
}
