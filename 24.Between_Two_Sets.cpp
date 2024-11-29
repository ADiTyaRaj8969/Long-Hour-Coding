#include <bits/stdc++.h>
using namespace std;

// Calculate GCD using Euclidean algorithm
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Calculate LCM using GCD
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0)
        return 0;
    // First multiply, then divide to minimize overflow chance
    return (a / gcd(a, b)) * b;
}

// Calculate LCM of array elements
long long lcm_of_array(vector<int>& arr) {
    if (arr.empty()) 
        return 0;
        
    long long result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] == 0) 
            return 0;
        result = lcm(result, arr[i]);
        if (result < 0) // Overflow check
            return -1;
    }
    return result;
}

// Calculate GCD of array elements
long long gcd_of_array(vector<int>& arr) {
    if (arr.empty()) 
        return 0;
        
    long long result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        result = gcd(result, arr[i]);
    }
    return result;
}

// Count numbers between LCM and GCD
int count_numbers_between(vector<int>& arr1, vector<int>& arr2) {
    // Check for empty arrays
    if (arr1.empty() || arr2.empty())
        return 0;
        
    // Calculate LCM and GCD
    long long lcm_val = lcm_of_array(arr1);
    long long gcd_val = gcd_of_array(arr2);
    
    // Check for overflow or invalid values
    if (lcm_val == -1 || lcm_val == 0 || gcd_val == 0)
        return 0;
        
    // If LCM > GCD, no numbers exist between them
    if (lcm_val > gcd_val)
        return 0;
        
    // Check if gcd_val is divisible by lcm_val
    if (gcd_val % lcm_val != 0)
        return 0;
        
    // Calculate count of numbers
    return gcd_val / lcm_val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    cin >> m >> n;
    
    // Input validation
    if (m <= 0 || n <= 0) {
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> arr1(m);
    vector<int> arr2(n);
    
    // Read first array
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
        if (arr1[i] <= 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    
    // Read second array
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        if (arr2[i] <= 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    
    int result = count_numbers_between(arr1, arr2);
    cout << result << endl;
    
    return 0;
}