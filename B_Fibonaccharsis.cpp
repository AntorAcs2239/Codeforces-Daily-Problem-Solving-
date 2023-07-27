#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    for(int i=n;i>=1;i--)
    {
        ll a=n;
        ll b=i;
        bool flag=true;
        for(int j=1;j<=k-1;j++)
        {
            if(a-b<0)
            {
                flag=false;
                break;
            }
            ll t=a-b;
            a=b;
            b=t;
        }
        if(flag)ans++;
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