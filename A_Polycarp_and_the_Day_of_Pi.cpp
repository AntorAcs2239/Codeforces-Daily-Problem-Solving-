#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin>>s;
    string tem="314159265358979323846264338327";
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==tem[i])ans++;
        else break;
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