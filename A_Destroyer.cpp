#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   cin>>n;
   map<int,int>mp;
   int m=INT_MIN;
   for(int i=1;i<=n;i++)
   {
    int x;
    cin>>x;
    mp[x]++;
    m=max(m,x);
   }
   vector<int>vec;
   for(int i=0;i<=m;i++)
   {
    vec.push_back(mp[i]);
   }
   if(vec[0]==0)
   {
    cout<<"NO"<<endl;
    return;
   }
   for(int i=0;i<vec.size()-1;i++)
   {
    if(vec[i]<vec[i+1])
    {
        cout<<"NO"<<endl;
        return;
    }
   }
   cout<<"YES"<<endl;
   
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