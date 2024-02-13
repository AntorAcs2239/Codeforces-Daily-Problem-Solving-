#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(abs(a-b)%2==0)cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
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
