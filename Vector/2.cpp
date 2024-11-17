#include <iostream>
#include <vector>
#include <cctype>  // for toupper
using namespace std;

vector<string> capitalizeFirstChar(vector<string> &v) {
    for (string &str : v) {
        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }
    }
    return v;
}

int main() {
    vector<string> v = {"circle", "traingle", "rectangle", "pentagon", "square"};
    v = capitalizeFirstChar(v);
    
    cout << "Capitalized Vector elements: ";
    for (const string &str : v) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}
