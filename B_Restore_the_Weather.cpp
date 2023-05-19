#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n],br[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++)
    {
        vec.push_back({ar[i],i});
    }
    sort(vec.begin(),vec.end());
    ll ans[n];
    sort(br,br+n);
    for(int i=0;i<n;i++)
    {
        ll a=vec[i].second;
        ans[a]=br[i];
    }
    for(int i=0;i<n;i++)
    {
       cout<<ans[i]<<" ";
    }
    cout<<endl;
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