#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,c;
    cin>>n>>c;
    ll ar[n];
    ll a=0;
    ll b=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        a+=ar[i]*ar[i];
        b+=ar[i];
    }
    ll low=1,high=sqrt(c/n)+1;
    ll mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        ll tem=(n*(mid*mid))+(2*mid*b)+a;
        if(tem==c)
        {
            cout<<mid/2<<endl;
            return;
        }
        else if(tem<c)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
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