#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(int n)
{
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{
   int n;
   cin>>n;
   ll ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   ll ans1=0;
   ll ans2=0;
   bool flag=true;
   for(int i=0;i<n;i++)
   {
    if(ar[i]>0)
    {
        flag=false;
        break;
    }
   }
   for(int i=0;i<n;i+=2)ans1+=max((ll)0,ar[i]);
   for(int i=1;i<n;i+=2)ans2+=max((ll)0,ar[i]);
   if(flag)cout<<*max_element(ar,ar+n)<<endl;
   else cout<<max(ans1,ans2)<<endl;
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