#include <iostream>
#include <sstream>
using namespace std;

string decimalToHexadecimal(int num)
{
    stringstream ss;
    ss << hex << num;
    return ss.str();
}

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Hexadecimal: " << decimalToHexadecimal(num) << endl;
    return 0;
}
