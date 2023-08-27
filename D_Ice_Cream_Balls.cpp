#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll s(ll n)
{
    ll ans = 1;
    if (n % 2 == 0)
    {
        ans = (n / 2) * (n - 1);
    }
    else
    {
        ans = ((n - 1) / 2) * n;
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    ll left = 1, right = (2e9);
    ll mid;
    ll p;
    while (left <= right)
    {
        mid = (left + right) / 2;
        ll x = s(mid);
        if (x == n)
        {
            p = mid;
            break;
        }
        else if (x < n)
        {
            p = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    ll x = s(p);
    x = n - x;
    cout << p + x << endl;
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