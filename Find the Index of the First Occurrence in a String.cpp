#include <iostream>
using namespace std;
int strStr(string haystack, string needle) {
    int m = haystack.size();
    int n = needle.size();
    if (n == 0) {
        return 0; 
    }
    for (int i = 0; i <= m - n; ++i) {
        int j;
        for (j = 0; j < n; ++j) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == n) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    string haystack = "sdbutsad";
    string needle = "sad";
    int result = strStr(haystack, needle);
    cout << "Index of first occurrence: " << result << endl;
    return 0;
}
