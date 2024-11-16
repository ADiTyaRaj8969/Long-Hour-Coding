#include<bits/stdc++.h>
using namespace std;
void miniMaxSum(vector<long long> arr) {
    sort(arr.begin(), arr.end());
    long long minSum = accumulate(arr.begin(), arr.end() - 1, 0LL);
    long long maxSum = accumulate(arr.begin() + 1, arr.end(), 0LL);
    cout << minSum << " " << maxSum << endl;
}
int main() {
    vector<long long> arr(5);
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
    miniMaxSum(arr);
    return 0;
}
