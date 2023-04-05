#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    int ar[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            cin >> ar[i][j];
    }
    int prev;
    vector<int> ans;
    int a, b;
    int c1 = 0, c2 = 0;
    for(int i=1;i<n;i++)
    {
        if(ar[i][0]!=ar[i-1][0])
        {
            a=ar[i][0];
            b=ar[i-1][0];
            break;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (ar[i][0] == a)
            c1++;
        else
            c2++;
    }
    if (c1 > c2)
    {
        ans.push_back(a);
        ans.push_back(b);
        prev = b;
    }
    else
    {
        ans.push_back(b);
        ans.push_back(a);
        prev = a;
    }
    for (int j = 1; j < n-1; j++)
    {
            for (int i = 0; i < n ; i++)
            {
                if (ar[i][j] != prev)
                {
                    ans.push_back(ar[i][j]);
                    prev = ar[i][j];
                    break;
                }
            }
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
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