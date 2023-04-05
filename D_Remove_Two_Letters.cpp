#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n-1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+2])ans--;
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