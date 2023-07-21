#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n,k;
   cin>>n>>k;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   int br[n-1];
   int ans=0;
   for(int i=0;i<n-1;i++)
   {
    br[i]=abs(ar[i]-ar[i+1]);
    ans+=br[i];
   }
   sort(br,br+n-1,greater<int>());
   for(int i=0;i<k-1;i++)ans-=br[i];
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