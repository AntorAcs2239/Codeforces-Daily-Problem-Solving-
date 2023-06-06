#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   cin>>n;
   set<ll>st;
   for(int i=0;i<n;i++)
   {
    ll x;
    cin>>x;
    st.insert(x);
   }
   if(st.size()<=3)
   {
    cout<<"0"<<endl;
    return;
   }
   vector<ll>vec;
   for(auto x:st)vec.push_back(x);
   ll m=-1;
   ll ans=-1;
   for(int i=1;i<vec.size();i++)
   {
    if(vec[i]-vec[i-1]>m)
    {
        m=vec[i]-vec[i-1];
    }
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