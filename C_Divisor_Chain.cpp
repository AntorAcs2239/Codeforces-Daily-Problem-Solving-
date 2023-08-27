#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll s(ll n)
{
    ll ans = 1;
    if (n % 2 == 0)
    {
        ans = (n / 2) * (n - 1);
    }
    else
    {
        ans = ((n - 1) / 2) * n;
    }
    return ans;
}
void solve()
{
    ll n;
    cin>>n;
    ll t=log2(n);
    ll x=pow(2,t);
    ll tx=n-x;
    vector<int>vec;
    vec.push_back(n);
    ll i=0;
    while (tx>0)
    {
       if(tx%2)
       {
          ll a=pow(2,i);
          n-=a;
          vec.push_back(n);
       }
       i++;
       tx=tx/2;
    }
    while(x>0)
    {
        x=x/2;
        if(x>0)
        vec.push_back(x);
    }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
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