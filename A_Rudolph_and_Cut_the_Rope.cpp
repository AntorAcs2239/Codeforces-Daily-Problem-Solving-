#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   int ans=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    int a,b;
    cin>>a>>b;
    if(a>b)ans++;
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