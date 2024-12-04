#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> que(q);
    for (int i = 0; i < q; i++)
    {
        cin>>que[i];
    }
    for(int i=0;i<k;i++)
    {
        int temp=v[v.size()-1];
        for(int j=v.size()-1;j>0;j--)
        {
            v[j]=v[j-1];
        }
        v[0]=temp;
    }
    
    for (int i:que)
    {
        cout<<v[i]<<endl;
    }
    return 0;
    
}

