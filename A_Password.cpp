#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    set<int>st;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    int x=10-st.size();
    x=(x*(x-1))/2;
    cout<<x*6<<endl;
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