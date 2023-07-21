#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   sort(ar,ar+n);
   int ans=0;
   for(int i=0,j=n-1;i<j;i++,j--)
   {
    ans+=ar[j]-ar[i];
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