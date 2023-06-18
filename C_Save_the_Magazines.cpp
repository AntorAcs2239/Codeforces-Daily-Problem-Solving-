#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ar[n];
    int br[n];
    int ans=0;
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        br[i]=ar[i];
        if(s[i]=='1')x++;
    }
    for(int i=1;i<n;i++)ar[i]+=ar[i-1];
    vector<pair<int,int>>vec;
    int l=0,r=0;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='1')
       {
        l=i;
        int j=i;
        while(j<n&&s[j]=='1')
        {
            j++;
        }
        vec.push_back({l,j-1});
        i=j-1;
       }
    }
    for(int i=0;i<vec.size();i++)
    {
        int l=vec[i].first;
        int r=vec[i].second;
        if(i==0&&l==0)
        {
            int tem=ar[r];
            ans+=tem;
            continue;
        }
        int tem;
        if(l-2>=0)tem=ar[r]-ar[l-2];
        else tem=ar[r];
        int m=INT_MIN;
        for(int j=l-1;j<=r;j++)
        {
            m=max(m,tem-br[j]);
        }
        ans+=m;
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