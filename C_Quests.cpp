#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    int br[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];
    int ans=0;
    int sum=0;
    int mx=0;
    for(int j=0;j<min(n,k);j++)
    {
        sum+=ar[j];
        mx=max(br[j],mx);
        ans=max(ans,sum+mx*(k-j-1));
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
