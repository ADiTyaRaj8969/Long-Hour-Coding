#include<bits/stdc++.h>
using namespace std;
vector<int> permutationEquation(const vector<int>& p) {
    int n = p.size();
    vector<int> index_map(n + 1);
    for (int i = 0; i < n; ++i) {
        index_map[p[i]] = i + 1;
    }
    
    vector<int> result;
    for (int x = 1; x <= n; ++x) {
        int y = index_map[index_map[x]];
        result.push_back(y);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    vector<int> result = permutationEquation(p);
    for (int value : result) {
        cout << value << endl;
    }
    return 0;
}