#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll n=a/b;
    ll m=a/c;
    ll t=__gcd(b,c);
    t=(b*c)/t;
    ll p=a/t;
    n-=p;
    m-=p;
   // cout<<p<<" "<<n<<" "<<m<<endl;
    ll ans1=(a*(a+1))/2-((a-n)*(a-n+1))/2;
    ll ans2=(m*(m+1))/2;
    cout<<ans1-ans2<<endl;
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