#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    ll ans = 0;
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] == ar[i - 1])
            c++;
        else
        {
            i++;
            int x=1;
            while(i<n&&ar[i]==ar[i-1])
            {
                x++;
                i++;
            }
            i--;
            ans+=max({0,x-c});
            c=x;
        }
    }
    ans+=c;
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}