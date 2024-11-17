#include <iostream>
#include <unordered_set>
using namespace std;

bool containsAllLetters(const string &first, const string &second) {
    unordered_set<char> letterSet(first.begin(), first.end());
    
    for (char ch : second) {
        if (letterSet.find(ch) == letterSet.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "Laptop";
    string str2 = "Lap";
    
    bool result = containsAllLetters(str1, str2);
    cout << "First string contains all letters from second string: " << (result ? "true" : "false") << endl;
    
    return 0;
}
