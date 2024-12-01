#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> cost(n);
    int total=0;
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
        total=total+cost[i];
    }
    int share=(total-cost[k])/2;
    int b;
    cin>>b;
    if(b==share)
    {
        cout<<"Bon Appetit.....";
    }
    else
    {
        cout<<b-share;
    }
    return 0;
}