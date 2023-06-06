#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b;
    cin>>a>>b;
    ll ans=LLONG_MAX;
    for(int i=1;i<=100005;i++)
    {
        ll x=(a+i-1)/i;
        ll y=(b+i-1)/i;
        ll z=i-1+x+y;
        ans=min(ans,z);
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