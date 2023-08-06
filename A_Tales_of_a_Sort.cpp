#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n;
   cin>>n;
   ll ar[n];
   ll ans=0;
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
   }
   for(int i=0;i<n-1;i++)
   {
    if(ar[i]>ar[i+1])
    {
        ans=max(ans,ar[i]);
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