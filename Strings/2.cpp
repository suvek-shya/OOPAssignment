#include <iostream>
#include <sstream>
using namespace std;

string capitalizeFirstLetter(string str) {
    bool capitalize = true;
    
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            capitalize = true;
        } else if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = false;
        }
    }
    
    return str;
}

int main() {
    string input = "there is an elephant in the jungle.";
    string output = capitalizeFirstLetter(input);
    cout << "Capitalized String: " << output << endl;
    return 0;
}
