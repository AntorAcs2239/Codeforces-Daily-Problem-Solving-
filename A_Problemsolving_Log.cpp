#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        mp[(s[i]-'A')+1]++;
    }
    int ans=0;
    for(auto x:mp)
    {
        if(x.first<=x.second)ans++;
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
