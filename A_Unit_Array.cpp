#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int m=0,p=0;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x<0)m++;
        else p++;
    }
    int a=(n+1)/2;
    if(m%2)
    {
        p++;
        m--;
        ans++;
    }
    if(p<a)
    {
        int x=a-p;
        if(x%2)x++;
        ans+=x;
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