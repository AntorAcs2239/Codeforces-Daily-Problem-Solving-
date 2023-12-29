#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a1 = 0, b1 = 0;
            int a = 0, b = 0;
            int x = i, y = j;
            for (int k = 0; k < n; k++)
            {
                if (s[k] == 'A')
                    a1++;
                else
                    b1++;
                if (a1 == x)
                {
                    a++;
                    a1 = 0;
                    b1 = 0;
                }
                else if (b1 == x)
                {
                    b++;
                    a1 = 0;
                    b1 = 0;
                }
            }
            if (a == y)
            {
                cout << "A" << endl;
                return;
            }
            else if (b == y)
            {
                cout << "B" << endl;
                return;
            }
        }
    }
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