#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    unordered_map<ll,ll>mp;

    sort(ar,ar+n);
    for(int i=0;i<n;i++)mp[ar[i]]++;
    int idx=n;
    int ans=0;
    for(int i=n;i>=1;i--)
    {
        int tem=i;
        int x=sqrt(tem);
        int t=0;
        for(int j=1;j<=x;j++)
        {
            if(tem%j==0)
            {
                if(tem/j==j)
                {
                    t+=mp[j];
                }
                else 
                {
                    t+=mp[j];
                    t+=mp[tem/j];
                }
            }
        }
        ans=max(ans,t);
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