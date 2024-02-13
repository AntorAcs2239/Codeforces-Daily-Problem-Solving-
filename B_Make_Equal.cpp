#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    ll ar[n];
    
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    ll need=sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>need)
        {
            sum+=ar[i]-need;
        }
        else 
        {
            if(sum<need-ar[i])
            {
                cout<<"NO"<<endl;
                return;
            }
            sum=sum-(need-ar[i]);
        }
    }
    if(sum!=0)cout<<"NO"<<endl;
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
