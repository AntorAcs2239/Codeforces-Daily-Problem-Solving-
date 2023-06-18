#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    map<int,int>mp;
    int idx=-1;
    mp[0]=1;
    int x=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]>=ar[i-1])
        {
            mp[i]=1;
        }
        else
        {
            idx=i;
            break;
        }
    }
    if(idx!=-1)
    {
        ll t=ar[0];
        ll p;
        int idxx=-1;
        for(int i=idx;i<n;i++)
        {
            if(ar[i]<=ar[0])
            {
                p=ar[i];
                idxx=i;
                break;
            }
        }
        if(idxx!=-1)
        {
            mp[idxx]=1;
            for(int i=idxx+1;i<n;i++)
            {
                if((ar[i]>=p)&&(ar[i]<=t))
                {
                    mp[i]=1;
                    p=ar[i];
                }
            }
        }
    }
    for(int i=0;i<n;i++)cout<<mp[i];
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