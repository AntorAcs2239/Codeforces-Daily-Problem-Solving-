#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        ans=min(ans,a+(b-1)/2);
    }
    cout<<ans<<endl;
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