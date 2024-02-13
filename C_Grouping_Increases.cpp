#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int a=n,b=n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=b)
        {
            b=ar[i];
        }
        else
        {
            if(ar[i]<=a)
            {
                a=ar[i];
            }
            else 
            {
                b=ar[i];
                ans++;
            }
        }
        if(a<b)swap(a,b);
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
