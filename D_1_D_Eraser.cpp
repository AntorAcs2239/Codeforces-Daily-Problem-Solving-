#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int p=i;
        if(s[i]=='B')
        {
            for(int j=i;j<min(n,i+k);j++)
            {
                if(s[j]=='B')p=j;
            }
            ans++;
        }
        i=p;
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