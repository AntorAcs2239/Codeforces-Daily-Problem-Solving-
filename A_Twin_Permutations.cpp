#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int x=n+1-ar[i];
        ans.push_back(x);
    }
    for(auto x:ans)cout<<x<<" ";
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