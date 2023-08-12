#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    ll ans = -1;
    vector<ll> vec;
    vector<ll> tem;
    for (int j = n; j >= 1; j--)
    {
        vec.push_back(j);
        for (int k = 1; k <= j - 1; k++)
        {
            tem.push_back(k * k);
        }
        ll p = 0;
        for (int k = j; k <= n; k++)
        {
            tem.push_back(k * vec[p]);
            p++;
        }
        sort(tem.begin(), tem.end());
        ll t = accumulate(tem.begin(), tem.end(), 0);
        t -= *max_element(tem.begin(), tem.end());
        ans = max(ans, t);
        tem.clear();
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