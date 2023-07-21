#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   cin>>n;
   for(int i=2;i*i<=n;i++)
   {
    ll t=1+i+i*i;
    int s=0;
    for(int j=3;j<=n;j++)
    {
        if(t>=n)break;
        t+=pow(i,j);
    }
    if(t==n)
    {
        cout<<"YES"<<endl;
        return;
    }
   }
   cout<<"NO"<<endl;
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