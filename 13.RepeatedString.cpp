#include <bits/stdc++.h>
using namespace std;
long repeatedString(string s, long n) {
    long stringLength = s.length();
    long countInOriginal = 0;
    for(char c : s) {
        if(c == 'a') countInOriginal++;
    }
    long completeStrings = n / stringLength;
    long remainingChars = n % stringLength;
    long countInRemaining = 0;
    for(long i = 0; i < remainingChars; i++) {
        if(s[i] == 'a') countInRemaining++;
    }
    return (countInOriginal * completeStrings) + countInRemaining;
}
int main() {
    string s;
    long n;
    cin >> s;      
    cin >> n;       
    cout << repeatedString(s, n) << endl;
    return 0;
}