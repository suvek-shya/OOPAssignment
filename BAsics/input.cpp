// 1. Write a C++ program that accepts the user's first and last name and prints them in
// reverse order with a space between them.
// Input First Name: John
// Input Last Name: Doe
// Name in reverse is: Doe John

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string firstName, lastName;

    cout << "Enter your firstName" << endl;
    cin >> firstName;
    cout << "Enter your lastName" << endl;
    cin >> lastName;

    cout << "Printing the name in reverse order: " << lastName << " " << firstName << endl;

    return 0;
}