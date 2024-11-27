#include<iostream> 
using namespace std; 
int HurdleRace(int height[], int n, int k) 
{ 
    int max_e = height[0]; 
    for(int i = 0; i < n; i++){ 
        if(height[i] > max_e){ 
            max_e = height[i]; 
        } 
    } 
    if(k > max_e){ 
        return 0; 
    } 
    int potion = max_e - k; 
    return potion; 
} 
 
int main(){ 
    int n, k; 
    cin >> n >> k;  
    int height[n]; 
    for(int i = 0; i < n; i++){ 
        cin >> height[i]; 
    } 
    int potion = HurdleRace(height, n, k); 
    cout << potion; 
    return 0; 
} 