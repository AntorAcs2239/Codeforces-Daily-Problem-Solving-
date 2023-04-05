#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,s,r;
    cin>>n>>s>>r;
    int t=r/(n-1);
    int m=r-(t*(n-1));
    vector<int>ans;
    for(int i=1;i<=n-1;i++)ans.push_back(t);
    for(int i=ans.size()-1;i>=0;i--)
    {
        if(!m)break;
        ans[i]++;
        m--;
    }
    ans.push_back(s-r);
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