#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    ll ans=b-1;
    b=1;
    for(int i=0;i<n;i++)
    {
        ll t=min(b+ar[i],a);
        ans+=t-1;
        b=1;
    }
    cout<<ans+1<<endl;
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