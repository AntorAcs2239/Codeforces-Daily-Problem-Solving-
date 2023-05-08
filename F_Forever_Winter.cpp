#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<int>vec[10005];
void solve()
{
   int n,m;
   cin>>n>>m;
   for(int i=1;i<=n;i++)vec[i].clear();
   for(int i=1;i<=m;i++)
   {
    int u,v;
    cin>>u>>v;
    vec[v].push_back(u);
    vec[u].push_back(v);
   }
   map<int,int>m1;
   int a=-1,b=INT_MAX;
   for(int i=1;i<=n;i++)
   {
    if(vec[i].size()>1)
    {
        m1[vec[i].size()]++;
    }
   }
   int me=-1;
   for(auto x:m1)
   {
      if(me<x.second)
      {
        me=x.second;
        a=x.first;
      }
   }
   me=n+1;
   for(auto x:m1)
   {
    if(me>x.second)
    {
        me=x.second;
        b=x.first;
    }
   }
   cout<<b<<" "<<a-1<<endl;
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