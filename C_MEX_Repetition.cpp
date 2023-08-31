#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k;
    cin >> n >> k;
    int ar[n + 1];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]] = 1;
    }
    int mx;
    for (int i = 0; i <=n; i++)
    {
        if (mp[i] == 0)
        {
            mx = i;
            break;
        }
    }
    vector<int> vec;
    vec.push_back(mx);
    for (int i = n - 1; i >= 0; i--)
        vec.push_back(ar[i]);
    int m = k % (n + 1);
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        ans.push_back(vec[i]);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    for (int i = 0; i < n - m; i++)
        cout << ar[i] << " ";
    cout << endl;
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