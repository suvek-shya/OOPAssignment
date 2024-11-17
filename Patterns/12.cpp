#include <iostream>
using namespace std;

void printOddPattern(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    printOddPattern(rows);
    return 0;
}
