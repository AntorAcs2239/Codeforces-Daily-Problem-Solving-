#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    map<ll,ll>m1,m2,m3,m4;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        m1[a]++;
        m2[b]++;
        m3[a-b]++;
        m4[a+b]++;
    }
    ll ans=0;
    for(auto x:m1)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x:m2)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x:m3)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x:m4)
    {
        ans+=x.second*(x.second-1);
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