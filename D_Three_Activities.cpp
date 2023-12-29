#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    vector<pair<int, int>> c;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back({v, i});
    }
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        b.push_back({v, i});
    }
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        c.push_back({v, i});
    }
    sort(a.begin(), a.end(), greater<pair<int, int>>());
    sort(b.begin(), b.end(), greater<pair<int, int>>());
    sort(c.begin(), c.end(), greater<pair<int, int>>());
    int ans = -1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                set<int> st;
                st.insert(a[i].second);
                st.insert(b[j].second);
                st.insert(c[k].second);
                if (st.size() == 3)
                {
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
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
