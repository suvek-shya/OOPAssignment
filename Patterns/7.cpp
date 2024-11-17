#include <iostream>
using namespace std;

int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << binomialCoeff(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    printPascalsTriangle(rows);
    return 0;
}
