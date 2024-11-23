#include<bits/stdc++.h>
using namespace std;
int pickingNumbers(const vector<int>& a) {
    unordered_map<int, int> frequency;
    for (int num : a) {
        frequency[num]++;
    }
    int max_count = 0;
    for (const auto& pair : frequency) {
        int num = pair.first;
        int count = pair.second;
        int current_count = count + frequency[num + 1];
        max_count = max(max_count, current_count);
    }
    return max_count;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}