#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    ll x=0;
    for(int i=n-1;i>=0;i--)
    {
        ll a=ar[i]-x;
        ll t=i+1;
        if(mp[t]!=a)
        {
            cout<<"NO"<<endl;
            return;
        }
        x=ar[i];
    }
    cout<<"YES"<<endl;
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