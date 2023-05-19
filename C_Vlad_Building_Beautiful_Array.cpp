#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    bool flag=true;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if((ar[i]%2)&&(odd==0))
        {
            flag=false;
            break;
        }
        if(ar[i]%2)odd=1;
    }
    bool flag2=true;
    odd=0;
    for(int i=0;i<n;i++)
    {
        if((ar[i]%2==0)&&odd==0)
        {
            flag2=false;
            break;
        }
        if(ar[i]%2)odd=1;
    }
    if(flag||flag2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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