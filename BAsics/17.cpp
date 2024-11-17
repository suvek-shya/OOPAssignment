#include <iostream>
using namespace std;

string onesComplement(string binary)
{
    for (int i = 0; i< binary.size(); i++)
    {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    return binary;
}

string twosComplement(string binary)
{
    string onesComp = onesComplement(binary);
    int n = onesComp.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if (onesComp[i] == '0')
        {
            onesComp[i] = '1';
            break;
        }
        else
        {
            onesComp[i] = '0';
        }
    }
    return onesComp;
}

int main()
{
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Two's complement: " << twosComplement(binary) << endl;
    return 0;
}
