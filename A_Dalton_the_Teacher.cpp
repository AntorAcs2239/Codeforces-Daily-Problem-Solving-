#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n;
   cin>>n;
   int ar[n];
   int ans=0;
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
    if(ar[i]==i+1)ans++;
   }
   cout<<(ans+1)/2<<endl;
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