#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n%2==0||k==1)cout<<"YES"<<endl;
    else if((n%2==1)&&(k%2==1))
    {
        cout<<"YES"<<endl;
    }
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