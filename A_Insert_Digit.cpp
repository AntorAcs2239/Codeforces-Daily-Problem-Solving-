#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        int t=s[i]-'0';
        if(t<k)
        {
            s.insert(s.begin()+i,k+'0');
            flag=true;
            break;
        }
    }
    if(!flag)s.push_back(k+'0');
    cout<<s<<endl;
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