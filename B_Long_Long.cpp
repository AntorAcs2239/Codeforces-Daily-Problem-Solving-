#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   cin>>n;
   ll ar[n];
   ll sum=0;
   for(int i=0;i<n;i++)cin>>ar[i];
   ll ans=0;
   ll x=0;
   for(int i=0;i<n;i++)
   {
    sum+=abs(ar[i]);
    if(ar[i]<=0)
    {
        x+=abs(ar[i]);
    }
    else 
    {
        if(x>0)ans++;
        x=0;
    }
   }
   if(x>0)ans++;
   cout<<sum<<" "<<ans<<endl;
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