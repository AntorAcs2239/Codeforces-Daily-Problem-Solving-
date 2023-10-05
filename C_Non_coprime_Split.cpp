#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a, b;
    cin >> a >> b;
    bool check = true;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            check = false;
    }
    if (!check)
    {
        int x;
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                x = i;
                break;
            }
        }
        cout << x << " " << a - x << endl;
    }
    else
    {
        if (a == 1 || a == 2 || a == 3)
        {
            if (b < 4)
                cout << "-1" << endl;
            else
            {
                cout << "2"
                     << " "
                     << "2" << endl;
            }
        }
        else
        {
            if (a == b)
                cout << "-1" << endl;
            else
            {
                a++;
                int x;
                for (int i = 2; i <= sqrt(a); i++)
                {
                    if (a % i == 0)
                    {
                        x = i;
                        break;
                    }
                }
                cout << x << " " << a - x << endl;
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