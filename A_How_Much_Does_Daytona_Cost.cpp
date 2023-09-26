#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]==k)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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