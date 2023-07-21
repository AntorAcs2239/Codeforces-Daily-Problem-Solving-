#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n,d,h;
   cin>>n>>d>>h;
   double ans=0.5*d*h;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   for(int i=0;i<n-1;i++)
   {
      if(ar[i]+h<=ar[i+1])
      {
        ans+=0.5*d*h;
      }
      else 
      {
        int x=ar[i+1]-ar[i];
        x=d-x;
        ans+=0.5*(d+x)*(ar[i+1]-ar[i]);
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