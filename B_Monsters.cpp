#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n,k;
   cin>>n>>k;
   ll ar[n];
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
    if(ar[i]%k==0)
    {
        int t=ar[i]/k;
        t--;
        ar[i]-=k*t;
    }
    else ar[i]=ar[i]%k;
   }
   map<ll,vector<int>>mp;
   vector<ll>vec;
   for(int i=0;i<n;i++)
   {
    mp[ar[i]].push_back(i+1);
   }
   vector<int>ans;
   for(auto x:mp)
   {
    vec.push_back(x.first);
   }
   sort(vec.begin(),vec.end(),greater<ll>());
   for(int i=0;i<vec.size();i++)
   {
    auto x=mp[vec[i]];
    for(int i=0;i<x.size();i++)ans.push_back(x[i]);
   }
   for(int i=0;i<n;i++)cout<<ans[i]<<" ";
   cout<<endl;
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