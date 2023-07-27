#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    vector<ll>odd,even;
    vector<int>op,ep;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2)
        {
            odd.push_back(ar[i]);
            op.push_back(i);
        }
        else 
        {
            even.push_back(ar[i]);
            ep.push_back(i);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int s=0;
    for(int i=0;i<op.size();i++)
    {
        ar[op[i]]=odd[i];
    }
     for(int i=0;i<ep.size();i++)
    {
        ar[ep[i]]=even[i];
    }
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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