#include<bits/stdc++.h>
using namespace std;
string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string period = s.substr(9, 2); 
    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else if (period == "PM") {
        if (hour != 12) {
            hour += 12;
        }
    }
    stringstream ss;
    ss << setw(2) << setfill('0') << hour << ":" << minutes << ":" << seconds;
    return ss.str();
}
int main() {
    string s;
    getline(cin, s); 
    cout << timeConversion(s) << endl; 
    return 0;
}
