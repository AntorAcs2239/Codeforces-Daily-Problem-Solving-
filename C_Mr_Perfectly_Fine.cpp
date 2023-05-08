#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   map<string,vector<int>>mp;
   int n;
   cin>>n;
   int a=0,b=0,c=0;
   for(int i=0;i<n;i++)
   {
    int v;
    string s;
    cin>>v>>s;
    if(s=="11")a=1;
    if(s=="10")b=1;
    if(s=="01")c=1;
    mp[s].push_back(v);
   }
   if(a==0&&(b==0||c==0))
   {
    cout<<"-1"<<endl;
    return;
   }
   int ans=INT_MAX;
   if(a==1)
   {
    vector<int>tem=mp["11"];
    sort(tem.begin(),tem.end());
    ans=tem[0];
   }
   if(b==1&&c==1)
   {
    vector<int>x=mp["10"];
    vector<int>y=mp["01"];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
      ans=min(ans,x[0]+y[0]);
   }
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