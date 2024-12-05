#include<bits/stdc++.h>
using namespace std;
vector<string> cavityMap(vector<string> &grid)
{
    int n = grid.size();
    vector<string> result = grid;
    for (int i = 1; i < n - 1; ++i)
    {
        for (int j = 1; j < n - 1; ++j)
        {
            char current = grid[i][j];
            if (current > grid[i - 1][j] && current > grid[i + 1][j] &&
                current > grid[i][j - 1] && current > grid[i][j + 1])
            {
                result[i][j] = 'X'; 
            }
        }
    }
    return result;
}
void print(vector<string> &grid)
{
    for (string s:grid)
    {
        cout<<s<<"\n";
    }
    
}
int main()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> grid[i];
    }
    vector<string> result = cavityMap(grid);
    for (const string &row : result)
    {
        cout << row << endl;
    }
    return 0;
}