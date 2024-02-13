#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    map<pair<ll,ll>,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll a=ar[i]%x;
        ll b=ar[i]%y;
        mp[{a,b}]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll a=ar[i]%x;
        ll b=ar[i]%y;
        if(a==0)
        {
            ans+=mp[{a,b}]-1;
            mp[{a,b}]--;
        }
        else 
        {
            if(x-a==a)
            {
                ans+=mp[{x-a,b}]-1;
            }
            else ans+=mp[{x-a,b}];
            mp[{a,b}]--;
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
