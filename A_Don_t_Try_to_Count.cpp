#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;
    cin>>n>>m;
    string s,x;
    cin>>s>>x;
    for(int i=0;i<=10;i++)
    {
        if(s.find(x) != string::npos)
        {
            cout<<i<<endl;
            return;
        }
        s+=s;
    }
    cout<<"-1"<<endl;
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