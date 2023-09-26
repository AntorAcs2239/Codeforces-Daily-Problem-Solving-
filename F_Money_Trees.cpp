#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ar[n];
    ll h[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
        cin >> h[i];
    vector<vector<ll>> vec;
    vector<ll> tem;
    int ans = 0;
    if (ar[0] <= k)
        tem.push_back(ar[0]);
    for (int i = 1; i < n; i++)
    {
        if (h[i - 1] % h[i] == 0)
            tem.push_back(ar[i]);
        else
        {
            ll s = 0;
            int c = 0;
            int p = 0, q = 0;
            for (q = 0; q < tem.size(); q++)
            {
                s += tem[q];
                if (s > k)
                {
                    ans = max(ans, q - p);
                    s -= tem[p];
                    p++;
                }
            }
            ans = max(ans, q - p);
            tem.clear();
            tem.push_back(ar[i]);
        }
    }
    if (tem.size() > 0)
    {
        ll s = 0;
        int c = 0;
        int p = 0, q = 0;
        for (q = 0; q < tem.size(); q++)
        {
            s += tem[q];
            if (s > k)
            {
                ans = max(ans, q - p);
                s -= tem[p];
                p++;
            }
        }
        ans = max(ans, q - p);
    }
    cout << ans << endl;
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