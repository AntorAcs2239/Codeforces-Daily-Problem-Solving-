#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n-1;i++)cin>>ar[i];
    vector<int>ans;
    ans.push_back(ar[0]);
    for(int i=0;i<n-2;i++)
    {
        ans.push_back(min(ar[i],ar[i+1]));
    }
    ans.push_back(ar[n-2]);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
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