#include <iostream>
#include <vector>
#include <cctype>  // for isdigit
using namespace std;

vector<string> stringsWithNumbers(const vector<string> &v) {
    vector<string> result;
    for (const string &str : v) {
        for (char ch : str) {
            if (isdigit(ch)) {
                result.push_back(str);
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<string> v = {"laptop22", "circle", "apple360", "square"};
    vector<string> result = stringsWithNumbers(v);
    
    cout << "Strings containing numbers: ";
    for (const string &str : result) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}
