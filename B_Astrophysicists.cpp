#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n,k,g;
   cin>>n>>k>>g;
   if(k==0)
   {
      cout<<"0"<<endl;
      return;
   }
   ll x=(g-1)/2;
   if(x==0)
   {
      ll p=k*g;
      ll y=p%g;
      if(y>=(g+1)/2)
      {
         cout<<g-y<<endl;
         return;
      }
      cout<<p%g<<endl;
      return;
   }
   ll p=k*g;
   ll a=(p+x-1)/x;
   ll b=min(a,n);
   ll ans=(b-1)*x;
   p=p-ans;
   ll y=p%g;
   if(y>=(g+1)/2)
   {
      ans-=g-y;
   }
   else ans+=p%g;
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