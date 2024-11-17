#include<bits/stdc++.h>
using namespace std;
void plusMinus(const vector<int>& arr) {
    int size = arr.size();
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    for (int num : arr) {
        if (num > 0)
            positiveCount++;
        else if (num < 0)
            negativeCount++;
        else
            zeroCount++;
    }
    cout << fixed << setprecision(6);
    cout << static_cast<double>(positiveCount) / size << endl;
    cout << static_cast<double>(negativeCount) / size << endl;
    cout << static_cast<double>(zeroCount) / size << endl;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    plusMinus(arr);
    return 0;
}
