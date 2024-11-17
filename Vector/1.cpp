#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerThanNeighbours(const vector<int> &v) {
    vector<int> result;
    for (size_t i = 1; i < v.size() - 1; i++) {
        if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() {
    vector<int> v = {1, 2, 3, 0, 6, 1, 8};
    vector<int> result = smallerThanNeighbours(v);
    
    cout << "Elements smaller than their adjacent neighbours: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

