#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        int t=ar[i]+1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)t*=ar[j];
        }
        mx=max(mx,t);
    }
    cout<<mx<<endl;
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