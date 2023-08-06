#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ar[n];
    ll ans = -1;
    map<ll, pair<ll, ll>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll left = 0, right = *max_element(ar, ar + n) + k;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            ll can = mid;
            ll temk = k;
            for (int j = i; j < n; j++)
            {
                if (ar[j] >= can)
                {
                    check = true;
                    break;
                }
                ll diff = can - ar[j];
                if (diff > temk)
                    break;
                temk -= diff;
                can--;
            }
        }
        if (check)
        {
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
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