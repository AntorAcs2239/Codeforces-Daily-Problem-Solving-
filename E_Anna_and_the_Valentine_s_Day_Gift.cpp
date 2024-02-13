#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;
    cin>>n>>m;
    ll ar[n];
    int digit=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        int tem=ar[i];
        while(tem>0)
        {
            digit++;
            tem/=10;
        }
    }
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int tem=ar[i];
        int cnt=0;
        while(tem>0)
        {
            if(tem%10==0)cnt++;
            else break;
            tem/=10;
        }
        if(cnt>0)vec.push_back(cnt);
    }
    int ana=0;
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0;i<vec.size();i+=2)
    {
        ana+=vec[i];
    }
    if(digit-ana>m)cout<<"Sasha"<<endl;
    else cout<<"Anna"<<endl;
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
