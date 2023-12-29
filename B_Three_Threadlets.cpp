#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll ar[3];
    cin>>ar[0]>>ar[1]>>ar[2];
    sort(ar,ar+3);
    ll a=ar[0];
    ll b=ar[1];
    ll c=ar[2];
    int t=0;
    if(b%a==0)t+=(b/a)-1;
    else 
    {
        cout<<"NO"<<endl;
        return;
    }
    if(c%a==0)t+=(c/a)-1;
    else 
    {
        cout<<"NO"<<endl;
        return;
    }
    if(t<=3)cout<<"YES"<<endl;
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