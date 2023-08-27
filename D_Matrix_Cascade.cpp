#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll s(ll n)
{
    ll ans = 1;
    if (n % 2 == 0)
    {
        ans = (n / 2) * (n - 1);
    }
    else
    {
        ans = ((n - 1) / 2) * n;
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    char ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>ar[i][j];
    }
    map<int,vector<pair<int,int>>>mp;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>0&&mp[i].size()>0)
            {
                int c=0;
                auto x=mp[i];
                cout<<x.size()<<endl;
                for(int k=0;k<x.size();k++)
                {
                    if(x[k].first<=j&&x[k].second>=j)c++;
                    //cout<<x[k].first<<" "<<x[k].second<<endl;
                }
                if(ar[i][j]=='0'&&c%2)
                {
                    ans++;
                    int a=j;
                    for(int k=i+1;k<n;k++)
                    {
                        mp[k].push_back({max(a-1,0),min(a+1,n-1)});
                    }
                }
                else if(ar[i][j]=='1'&&c%2==0)
                {
                    ans++;
                    int a=j;
                    for(int k=i+1;k<n;k++)
                    {
                        mp[k].push_back({max(a-1,0),min(a+1,n-1)});
                    }
                }
                cout<<endl;
            }
            else if(i==0&&ar[i][j]=='1')
            {
                ans++;
                int a=j;
                for(int k=i+1;k<n;k++)
                {
                   mp[k].push_back({max(a-1,0),min(a+1,n-1)});
                }
            }
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