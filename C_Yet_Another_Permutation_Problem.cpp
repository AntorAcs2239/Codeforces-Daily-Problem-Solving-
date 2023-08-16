#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin>>n;
    vector<int>ans;
    int mp[200005]={0};
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            ans.push_back(i);
            mp[i]=1;
            for(int j=i*2;j<=n;j=j*2)
            {
                ans.push_back(j);
                mp[j]=1;
            }
        }
    }
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