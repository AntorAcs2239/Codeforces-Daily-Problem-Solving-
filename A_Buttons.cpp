#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=(c+1)/2;
    ll y=c-x;
    a+=x;
    if(a>(b+y))cout<<"First"<<endl;
    else cout<<"Second"<<endl;
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