#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += matrix[i][i];                
        secondaryDiagonalSum += matrix[i][n - i - 1];       
    }
    int difference = abs(primaryDiagonalSum - secondaryDiagonalSum);
    cout << difference << endl;
    return 0;
}
