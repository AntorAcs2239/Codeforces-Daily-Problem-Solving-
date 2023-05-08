#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };
bool vis[1005][1005];
int grid[1005][1005];
bool isValid(int row, int col,int Row,int COL)
{
    if (row < 0 || col < 0
        || row >= Row || col >= COL)
        return false;
    if (vis[row][col])
        return false;
    if(grid[row][col]>0)
    {
        return true;
    }
    return false;
}
ll BFS(
         int row, int col,int n,int m)
{
    ll s=0;
    queue<pair<int, int> > q;
    q.push({ row, col });
    vis[row][col] = true;
    while (!q.empty()) {
        pair<int, int> cell = q.front();
        int x = cell.first;
        int y = cell.second;
        s+=grid[x][y];
        q.pop();
        for (int i = 0; i < 4; i++) {
            int adjx = x + dRow[i];
            int adjy = y + dCol[i];
            if (isValid(adjx, adjy,n,m)&&grid[adjx][adjy]) 
            {
                q.push({ adjx, adjy });
                vis[adjx][adjy] = true;
            }
        }
    }
   // cout<<endl;
    return s;
}
void solve()
{
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        int v;
        cin>>v;
        grid[i][j]=v;
        vis[i][j]=false;
    }
   }
   ll ans=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(vis[i][j]==false&&grid[i][j]!=0)
        {
            ll v=BFS(i,j,n,m);
            ans=max(ans,v);
            //cout<<i<<" "<<j<<endl;
        }
    }
   }
   cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}