#include <iostream>
using namespace std;
int romanToInt(string s) {
    int result = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'I') {
            if (i + 1 < s.size() && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                result -= 1;
            } else {
                result += 1;
            }
        } else if (s[i] == 'V') {
            result += 5;
        } else if (s[i] == 'X') {
            if (i + 1 < s.size() && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                result -= 10;
            } else {
                result += 10;
            }
        }
    }
    return result;
}
int main() {
    string romanNumeral;
    cout << "Enter a Roman numeral (up to X): ";
    cin >> romanNumeral;
    int decimalNumber = romanToInt(romanNumeral);
    cout << "Equivalent Decimal number: " << decimalNumber << endl;
    return 0;
}
