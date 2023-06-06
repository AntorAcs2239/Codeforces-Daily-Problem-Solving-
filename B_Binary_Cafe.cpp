#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>vec;
    for(ll i=0;i<min(k,(ll)40);i++)
    {
        ll t=pow(2,i);
        vec.push_back(t);
    }
    int ans=1;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]<=n)ans++;
        int tem=0;
        for(int j=i;j<vec.size();j++)
        {
            tem+=vec[j];
            int x=0;
            for(int k=j+1;k<vec.size();k++)
            {
                if(tem+vec[k]<=n)
                {
                    x++;
                }
                else break;
            }
            ans+=x;
        }
    }
    cout<<ans<<endl;
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