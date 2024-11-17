#include <iostream>
#include <vector>
using namespace std;

string convertToWords(int num) {
    vector<string> belowTwenty = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                                  "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", 
                                  "Eighteen", "Nineteen"};
    vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    if (num == 0) return "Zero";
    if (num < 20) return belowTwenty[num];
    if (num < 100) return tens[num / 10] + (num % 10 ? " " + belowTwenty[num % 10] : "");
    
    return "";
}

int main() {
    int input = 29;
    string output = convertToWords(input);
    cout << "Number in words: " << output << endl;
    return 0;
}
