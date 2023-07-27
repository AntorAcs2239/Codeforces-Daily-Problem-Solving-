#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int x=ar[0];
    int c=0;
    int idx1=-1,idx2=-1;
    if(ar[0]==ar[n-1])
    {
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==ar[0])t++;
        }
        if(t>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            c++;
        }
        if(c==k)
        {
            idx1=i;
            break;
        }
    }
    x=ar[n-1];
    c=0;
    for(int i=n-1;i>=0;i--)
    {
        if(ar[i]==x)
        {
            c++;
        }
        if(c==k)
        {
            idx2=i;
            break;
        }
    }
    if(idx1==-1||idx2==-1)cout<<"NO"<<endl;
    else if(idx1>idx2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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