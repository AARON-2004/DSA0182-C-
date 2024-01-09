#include <iostream>
#include <string>
using namespace std;
string longestCommonPrefix(string strs[], int n) {
    if (n == 0) {
        return "";
    }
    string prefix = strs[0];
    for (int i = 1; i < n; ++i) {
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            ++j;
        }
        prefix = prefix.substr(0, j);
        if (prefix.empty()) {
            break;
        }
    }
    return prefix;
}
int main() {
    string input[] = {"data", "dad", "david"};
    int size = sizeof(input) / sizeof(input[0]);
    string result = longestCommonPrefix(input, size);
    cout << "Longest common prefix: " << result << endl;
    return 0;
}
