#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()<s2.size())
    {
        string tem;
        for(int i=1;i<=s2.size()-s1.size();i++)tem+='0';
        tem+=s1;
        s1=tem;
    }
    ll ans=0;
    for(int i=0;i<s2.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            ans+=(s2[i]-'0')-(s1[i]-'0');
            ll x=s2.size()-i-1;
            ans+=x*9;
            break;
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