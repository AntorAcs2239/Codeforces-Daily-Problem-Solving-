#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    int ar[n][n];
    int i1 = 1, j1 = n * n;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            for (int j = n-1; j >=0; j--)
            {
                if (k % 2)
                {
                    ar[i][j]=i1;
                    i1++;
                }
                else
                {
                     ar[i][j]=j1;
                     j1--;
                }
                k++;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (k % 2)
                {
                    ar[i][j]=i1;
                    i1++;
                }
                else
                {
                     ar[i][j]=j1;
                     j1--;
                }
                k++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<ar[i][j]<<" ";
        cout<<endl;
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