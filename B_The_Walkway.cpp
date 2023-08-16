#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll t[m];
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }
    vector<ll> ar;
    if (t[0] != 1)
        ar.push_back(1);
    for (int i = 0; i < m; i++)
        ar.push_back(t[i]);
    ar.push_back(n + 1);
    int res = 0;
    for (int i = 0; i < ar.size() - 1; i++)
    {
        res += ((ar[i + 1] - ar[i] - 1) / k) + 1;
    }
    ll ans1 = res, ans2 = (t[0] == 1);
    for (int i = 1; i < ar.size() - 1; i++)
    {
        ll tem;
        tem = res;
        tem -= (ar[i + 1] - ar[i] - 1) / k;
        tem -= (ar[i] - ar[i - 1] - 1) / k;
        tem += (ar[i + 1] - ar[i - 1] - 1) / k;
        tem--;
        if (tem < ans1)
        {
            ans1 = tem;
            ans2 = 0;
        }
        if (tem == ans1)
        {
            ans2++;
        }
    }
    cout << ans1 << " " << ans2 << endl;
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