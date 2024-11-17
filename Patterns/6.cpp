#include <iostream>
using namespace std;

int main() {
    int rows;
    bool start = true;  // true for 1, false for 0
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << start;
            start = !start;  // Toggle between 1 and 0
        }
        cout << endl;
    }
    return 0;
}
