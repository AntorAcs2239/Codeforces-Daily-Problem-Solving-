#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll s(ll n)
{
    ll ans = 1;
    if (n % 2 == 0)
    {
        ans = (n / 2) * (n - 1);
    }
    else
    {
        ans = ((n - 1) / 2) * n;
    }
    return ans;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k%2==0)
    {
        sort(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }
    string e,o;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)e.push_back(s[i]);
        else o.push_back(s[i]);
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    int idx1=0,idx2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<e[idx1];
            idx1++;
        }
        else 
        {
            cout<<o[idx2];
            idx2++;
        }
    }
    cout<<endl;
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