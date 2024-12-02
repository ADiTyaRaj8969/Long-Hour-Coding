#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> score(n);
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }
    int max=score[0];
    int maxcount=0;
    int min=score[0];
    int mincount=0;
    for(int i:score)
    {
        if(i>max)
        {
            maxcount++;
            max=i;
        }
        if(i<min)
        {
            mincount++;
            min=i;
        }
    }
    cout<<maxcount<<" "<<mincount;
    return 0;
}