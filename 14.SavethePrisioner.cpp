#include<bits/stdc++.h>
using namespace std;
int saveThePrisoner(int n, int m, int s) {
    int last_position = (s + m - 1) % n;
    return last_position == 0 ? n : last_position;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, s;
        cin >> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << endl;
    }
    
    return 0;
}
