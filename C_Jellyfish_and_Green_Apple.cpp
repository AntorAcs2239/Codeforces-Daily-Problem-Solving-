#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,m;
    cin>>n>>m;
    n=n%m;
    ll ans=0;
    int step=0;
    while(n&&step<=100)
    {
        ans+=(n%m);
        n=2*(n%m);
        step++;
    }
    if(n!=0)cout<<"-1"<<endl;
    else cout<<ans<<endl;
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