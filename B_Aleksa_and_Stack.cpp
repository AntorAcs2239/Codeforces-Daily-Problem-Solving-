#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    vector<ll>ans;
    ll t=1;
    ans.push_back(t);
    for(int i=1;i<=n-1;i++)
    {
        t+=3;
        ans.push_back(t);
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
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