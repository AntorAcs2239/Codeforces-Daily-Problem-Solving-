#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll s(ll n)
{
    ll ans = 1;
    if (n % 2 == 0)
    {
        ans = (n / 2) * (n - 1);
    }
    else
    {
        ans = ((n - 1) / 2) * n;
    }
    return ans;
}
void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    vector<int>vec;
    vec.push_back(b);
    int x=b;
    for(int i=1;;i++)
    {
        x-=i;
        if(x<a||(vec.size()==n-1))break;
        vec.push_back(x);
    }
    vec.push_back(a);
    if(vec.size()<n)cout<<"-1"<<endl;
    else 
    {
        reverse(vec.begin(),vec.end());
        bool flag=true;
        int x=-1;
        vector<int>tem;
        for(int i=1;i<n;i++)
        {
            int t=vec[i]-vec[i-1];
            tem.push_back(t);
        }
        for(int i=1;i<n-1;i++)
        {
            if(tem[i]>=tem[i-1])flag=false;
        }
        if(flag)
        {
            for(int i=0;i<n;i++)cout<<vec[i]<<" ";
            cout<<endl;
        }
        else cout<<"-1"<<endl;
    }
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