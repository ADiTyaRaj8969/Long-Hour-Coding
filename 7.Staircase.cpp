#include<iostream>
using namespace std;
void Staircase(int n){
    for (int i = 0 ; i< n;i++){
        for(int j = 0;j< n-i-1;j++){
            cout<<" ";
        }
        for (int j = 0;j< i;j++){
            cout<<"# ";
        }
        for(int j = 0;j< n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n ;
    cin>>n;
    Staircase(n);
    return 0;
}