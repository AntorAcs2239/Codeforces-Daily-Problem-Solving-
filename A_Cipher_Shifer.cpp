#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<n;i++)
    {
        ans+=s[i];
        for(int j=i+1;j<n;j++)
        {
            if(s[j]==s[i])
            {
                i=j;
                break;
            }
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