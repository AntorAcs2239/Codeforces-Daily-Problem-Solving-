#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n;
   cin>>n;
   vector<ll>t1,t2;
   for(int i=1;i<=n;i++)
   {
    ll m;
    cin>>m;
    vector<ll>vec;
    for(int j=0;j<m;j++)
    {
        ll v;
        cin>>v;
        vec.push_back(v);
    }
    sort(vec.begin(),vec.end());
    t1.push_back(vec[0]);
    t2.push_back(vec[1]);
   }
   sort(t1.begin(),t1.end());
   sort(t2.begin(),t2.end(),greater<int>());
   ll ans=t1[0];
   for(int i=0;i<t2.size()-1;i++)ans+=t2[i];
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