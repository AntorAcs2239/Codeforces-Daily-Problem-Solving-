#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    int ar[n], br[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
        cin >> br[i];
    map<int, int> mp1, mp2;
    int x = 1;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] == ar[i - 1])
            x++;
        else
        {
            int a = mp1[ar[i - 1]];
            if (a < x)
            {
                mp1[ar[i - 1]] = x;
            }
            x = 1;
        }
    }
    int a = mp1[ar[n - 1]];
    if (a < x)
    {
        mp1[ar[n - 1]] = x;
    }
    x = 1;
    for (int i = 1; i < n; i++)
    {
        if (br[i] == br[i - 1])
            x++;
        else
        {
            int a = mp2[br[i - 1]];
            if (a < x)
            {
                mp2[br[i - 1]] = x;
            }
            x = 1;
        }
    }
    a = mp2[br[n - 1]];
    if (a < x)
    {
        mp2[br[n - 1]] = x;
    }
    int ans = INT_MIN;
    for (int i = 1; i <= 2 * n; i++)
    {
        int x = mp1[i] + mp2[i];
        ans = max(ans, x);
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