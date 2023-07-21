#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int c=1;
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]-ar[i-1]<=k)c++;
        else 
        {
            ans=max(ans,c);
            c=1;
        }
    }
    if(c>0)ans=max(ans,c);
    cout<<n-ans<<endl;
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