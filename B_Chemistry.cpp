#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++)mp[s[i]]++;
    int o=0;
    for(auto x:mp)
    {
        if((x.second)%2==1)o++;
    }
    if(k%2==0)
    {
        int m=min(k,o-(o%2));
        o-=m;
        k-=m;
    }
    else 
    {
        if(o==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(o%2==0)
        {
            int m=min(o-1,k);
            k-=m;
            o-=m;
        }
        else 
        {
            int m=min(o,k);
            k-=m;
            o-=m;
        }
    }
    if(k%2==1||o>1)cout<<"NO"<<endl;
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