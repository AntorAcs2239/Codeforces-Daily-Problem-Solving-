#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1])
        {
            cout<<"0"<<endl;
            return;
        }
    }
    int x=INT_MAX;
    for(int i=1;i<n;i++)
    {
        x=min(x,ar[i]-ar[i-1]);
    }
    cout<<(x/2)+1<<endl;
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