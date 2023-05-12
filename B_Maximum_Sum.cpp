#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    for(int i=1;i<n;i++)ar[i]+=ar[i-1];
    ll ans=ar[n-k-1];
    for(int i=1;i<=k;i++)
    {
        ll a=i;
        ll b=k-a;
        ll x=ar[n-b-1];
       ll y=ar[(a*2)-1];
       ans=max(ans,x-y);
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