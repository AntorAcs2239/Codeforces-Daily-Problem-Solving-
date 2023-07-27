#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,m,k,h;
    cin>>n>>m>>k>>h;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int d=abs(ar[i]-h);
        bool flag=false;
        for(int i=1;i<=m;i++)
        {
            for(int j=i+1;j<=m;j++)
            {
                int x=i*k;
                int y=j*k;
                if(y-x==d)
                {
                    flag=true;
                    break;
                }
            }
        }
        if(flag)ans++;
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