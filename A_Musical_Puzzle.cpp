#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    set<string>st;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        string tem;
        tem+=s[i];
        tem+=s[i+1];
        st.insert(tem);
    }
    cout<<st.size()<<endl;
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