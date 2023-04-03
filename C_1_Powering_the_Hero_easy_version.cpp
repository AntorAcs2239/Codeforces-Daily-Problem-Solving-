#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    priority_queue<ll>pq;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            if(!pq.empty())
            {
                ans+=pq.top();
                pq.pop();
            }
        }
        else pq.push(ar[i]);
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