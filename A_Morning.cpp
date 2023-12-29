#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    int cur = 1;
    for (int i = 0; i < s.size(); i++)
    {
        int c = s[i] - '0';
        if (c == 0)
        {
            if (cur == 0)
                ans++;
            else
            {
                ans += 9 - cur + 2;
                cur = c;
            }
        }
        else if(cur==0)
        {
            ans+=9-c+2;
            cur=c;
        }
        else
        {
            ans += abs(cur - c) + 1;
            cur = c;
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