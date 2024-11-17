#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &str) {
    int start = 0, end = str.size() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string input = "mom";
    bool result = isPalindrome(input);
    cout << "Is Palindrome: " << (result ? "True" : "False") << endl;
    return 0;
}
