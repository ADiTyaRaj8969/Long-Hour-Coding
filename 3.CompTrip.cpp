#include<bits/stdc++.h>
using namespace std;
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice_points = 0;
    int bob_points = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice_points++;
        } else if (a[i] < b[i]) {
            bob_points++;
        }
    }
    return {alice_points, bob_points};
}
int main() {
    vector<int> a(3), b(3);
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    vector<int> result = compareTriplets(a, b);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
