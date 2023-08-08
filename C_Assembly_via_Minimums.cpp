#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n;
   cin>>n;
   int x=(n*(n-1))/2;
   vector<ll>vec;
   for(int i=0;i<x;i++)
   {
    ll v;
    cin>>v;
    vec.push_back(v);
   }
   sort(vec.begin(),vec.end());
   int idx=0;
   for(int i=0;i<n-1;i++)
   {
    cout<<vec[idx]<<" ";
    idx+=n-1-i;
   }
   cout<<1000000000<<endl;
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