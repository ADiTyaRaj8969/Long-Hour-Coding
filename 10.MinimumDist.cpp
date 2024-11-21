#include<bits/stdc++.h>
using namespace std;
int minimumDistance(const vector<int>& arr) {
    unordered_map<int, int> lastIndex; 
    int minDist = numeric_limits<int>::max(); 
    for (int i = 0; i < arr.size(); i++) {
        int current = arr[i];
        if (lastIndex.find(current) != lastIndex.end()) {
            int distance = i - lastIndex[current]; 
            minDist = min(minDist, distance); 
        }
        lastIndex[current] = i;
    }
    return (minDist == numeric_limits<int>::max()) ? -1 : minDist;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << minimumDistance(arr) << endl;
    return 0;
}