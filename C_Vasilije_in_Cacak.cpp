#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll a=(k*(k+1))/2;
    ll b=(n*(n+1))/2;
    ll t=(n-k);
    b-=(t*(t+1))/2;
    if(x>=a&&x<=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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