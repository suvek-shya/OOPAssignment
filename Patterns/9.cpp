#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = i; k >= 1; k--) {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}
