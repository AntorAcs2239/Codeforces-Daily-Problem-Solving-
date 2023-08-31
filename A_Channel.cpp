#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, a, k;
    cin >> n >> a >> k;
    string s;
    cin >> s;
    int p = 0, m = 0;
    for (int i = 0; i < k; i++)
    {
        char ch = s[i];
        if (p + a >= n)
        {
            cout << "YES" << endl;
            return;
        }
        if (ch == '+')
            p++, m++;
        else
            p--;
    }
    if (p + a >= n)
    {
        cout << "YES" << endl;
        return;
    }
    else if (m + a < n)
        cout << "NO" << endl;
    else
        cout << "MAYBE" << endl;
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