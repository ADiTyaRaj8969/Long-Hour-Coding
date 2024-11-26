#include <iostream> 
#include <cmath> 
using namespace std; 
 
int squares(int a, int b) { 
    //smallest integer x such that x^2 >= a 
    int start = ceil(sqrt(a)); 
    //largest integer y such that y^2 <= b 
    int end = floor(sqrt(b)); 
    return (end - start + 1); 
} 
 
int main() { 
    int T; 
    cin >> T;  
 
    while (T--) { 
        int a, b; 
        cin >> a >> b; 
        cout << squares(a, b) << endl; 
    } 
 
    return 0; 
}