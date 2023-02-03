#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   int n,k;
   cin>>n>>k;
   int ar[n+1];
   for(int i=1;i<=n;i++)cin>>ar[i];
   int t=1;
   int ans=0;
   for(int i=1;i<=n;i++)
   {
       if(ar[i]==t)ans++,t++;
   }
   int x=(n-ans);
   cout<<(x+k-1)/k<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}