#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   int n;
   cin>>n;
   int p[n+1],q[n+1],a[n+1],b[n+1];
   map<int,int>f;
   for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i],p[i]=0,q[i]=0,f[a[i]]++;
   sort(b+1,b+n+1);
   for(int i=1;i<=n;i++)
   {
      if(b[i]<i||f[b[i]]>2)
      {
        cout<<"NO"<<endl;
        return;
      }
   }
   vector<pair<int,int>>vec;
   for(int i=1;i<=n;i++)
   {
    vec.push_back({a[i],i});
   }
   sort(vec.begin(),vec.end(),greater<pair<int,int>>());
   map<int,int>fp,fq;
   for(auto x:vec)
   {
      if(fp[x.first]==0)
      {
        p[x.second]=x.first;
        fp[x.first]=1;
      }
      else q[x.second]=x.first,fq[x.first]=1;
   }

   int x=n,y=n;
   for(auto au:vec)
   {
    if(p[au.second])
    {
        while(fq[x]==1)
        {
            x--;
        }
        q[au.second]=x;
        fq[x]=1;
    }
    else 
    {
        while(fp[y]==1)
        {
            y--;
        }
        p[au.second]=y;
        fp[y]=1;
    }
   }
   cout<<"YES"<<endl;
   for(int i=1;i<=n;i++)
   {
    cout<<p[i]<<" ";
   }
   cout<<endl;
    for(int i=1;i<=n;i++)
   {
    cout<<q[i]<<" ";
   }
   cout<<endl;
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