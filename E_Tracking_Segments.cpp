#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
    int x=p1.second-p1.first;
    int y=p2.second-p2.first;
    if(x<y)return true;
    return false;
}
void solve()
{
   int n,m;
   cin>>n>>m;
   set<pair<int,int>>st;
   vector<pair<int,int>>vec;
   for(int i=1;i<=m;i++)
   {
    int u,v;
    cin>>u>>v;
    st.insert({u,v});
   }
   for(auto x:st)vec.push_back(x);
   sort(vec.begin(),vec.end(),cmp);
   int q;
   cin>>q;
   int ar[q];
   for(int i=0;i<q;i++)cin>>ar[i];
   int ans=0;
   map<pair<int,int>,int>mp;
   bool flag=false;
   for(int i=0;i<q;i++)
   {
      int x=ar[i];
      for(int j=0;j<vec.size();j++)
      {
        int a=vec[j].first;
        int b=vec[j].second;
        if(x>=a&&x<=b)
        {
            mp[vec[j]]++;
            if(mp[vec[j]]>=b-a+1)
            {
                flag=true;
                break;
            }
        }
      }
      ans++;
      if(flag)break;
   }
   if(!flag)cout<<"-1"<<endl;
   else cout<<ans<<endl;
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