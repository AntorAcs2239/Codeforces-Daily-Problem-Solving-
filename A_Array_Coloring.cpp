#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n;
   cin>>n;
   ll ar[n];
   ll ans=0;
   int e=0,o=0;
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
    if(ar[i]%2)o++;
    else e++;
   }
   if(o==0)cout<<"YES"<<endl;
   else if(e==0)
   {
      if(o%2==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   else if(o%2==0)
   {
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
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