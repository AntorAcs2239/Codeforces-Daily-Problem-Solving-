#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    int mp[n+1];
    int vis[n+1];
    for(int i=0;i<=n;i++)mp[i]=0,vis[i]=0;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        mp[v]=i+1;
    }
    int ans=0;
    for(int i=n;i>=2;i--)
    {
        
        if(vis[i]==0)
        {
            int p=mp[i];
            int t=i-1;
            int tem=0;
            vis[i]=1;
            while(mp[t]>p)
            {
                p=mp[t];
                vis[t]=1;
                t--;
                tem++;
            }
            ans+=tem;
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}