#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    ll left=1,right=10000000000000;
    ll mid;
    ll ans=1;
    while(left<=right)
    {
        mid=(left+right)/2;
        ll tem=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]<=mid)tem+=mid-ar[i];
        }
        if(tem<=k)
        {
            ans=max(ans,mid);
            left=mid+1;
        }
        else right=mid-1;
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