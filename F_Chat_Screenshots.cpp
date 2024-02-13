#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;
    cin>>n>>m;
    int ar[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)cin>>ar[i][j];
    }
    if(m==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    vector<int>vec;
    for(int i=1;i<n;i++)
    {
        vec.push_back(ar[0][i]);
    }
    int p=0;
    int v;
    for(int i=1;i<n;i++)
    {
        if(ar[1][i]==ar[0][0])
        {
            v=ar[1][i-1];
            break;
        }
    }
   for(int i=0;i<vec.size();i++)
   {
    if(vec[i]==v)
    {
        vec.insert(vec.begin()+i+1,ar[0][0]);
        break;
    }
   }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[vec[i]]=i;
    }
    for(int i=0;i<m;i++)
    {
        int p=mp[ar[i][0]];
        bool flag=true;
        for(int j=1;j<p;j++)
        {
            int x=mp[ar[i][j]];
            if(x+1!=j)flag=false;
        }
        if(!flag)
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
