#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    ll tem=0;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=q)tem++;
        else 
        {
            ll t=tem-k+1;
            if(t>0)ans+=(t*(t+1))/2;
            tem=0;
        }
    }
    ll t=tem-k+1;
    if(t>0)ans+=(t*(t+1))/2;
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