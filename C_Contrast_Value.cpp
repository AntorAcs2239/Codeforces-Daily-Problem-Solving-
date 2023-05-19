#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   ll n;
   cin>>n;
   vector<ll>ar;
   for(int i=0;i<n;i++)
   {
    ll v;
    cin>>v;
    ar.push_back(v);
   }
   ar.resize(unique(ar.begin(),ar.end())-ar.begin());
   if(ar.size()==1)
   {
    cout<<"1"<<endl;
    return;
   }
   int ans=1;
   for(int i=1;i<ar.size()-1;i++)
   {
      if(ar[i]>ar[i-1]&&ar[i]>ar[i+1])ans++;
      if(ar[i]<ar[i-1]&&ar[i]<ar[i+1])ans++;
   }
   ans++;
   cout<<ans<<endl;
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