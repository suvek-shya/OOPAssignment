#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, n));
    return matrix;
}

int main() {
    int n;
    cout << "Enter an integer to create an n x n matrix: ";
    cin >> n;
    
    vector<vector<int>> matrix = createMatrix(n);
    
    cout << "Matrix: " << endl;
    for (const auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

