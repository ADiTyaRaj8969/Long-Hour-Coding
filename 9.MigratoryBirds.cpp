#include<bits/stdc++.h>
using namespace std;
int migratoryBirds(const vector<int>& arr) {
    unordered_map<int, int> birdCount;
    int maxCount = 0;
    int minType = numeric_limits<int>::max();
    for (int bird : arr) {
        birdCount[bird]++;
        if (birdCount[bird] > maxCount) {
            maxCount = birdCount[bird];
            minType = bird;
        } else if (birdCount[bird] == maxCount) {
            if (bird < minType) {
                minType = bird;
            }
        }
    }
    return minType;
}
int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << migratoryBirds(arr) << endl;

    return 0;
}