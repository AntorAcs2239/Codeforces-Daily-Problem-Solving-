#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, m;
    cin >> n >> m;
    int ar[n+1];
    for (int i = 1; i <=n; i++)
        cin >> ar[i];
    int tem = 0;
    int i, j;
    vector<pair<int, int>> vec;
    for (i = n , j = n ; i >= 1;)
    {
        tem += ar[i];
        if (tem > m)
        {
            if (j - i > 0)
            {
                vec.push_back({j, j - i});
                while (tem > m&&j>i)
                {
                    tem -=ar[j];
                    j--;
                }
                if(i==j&&tem>m)
                {
                    i--,j--;
                    tem=0;
                }
                else i--;
            }
            else
            {
                tem = 0, i--, j--;
            }
        }
        else i--;
    }
    if(j>=1)vec.push_back({j,j-i});
    int ans=INT_MAX;
    for(auto x:vec)
    {
        cout<<x.first<<" "<<x.second<<endl;
        int t=n-x.first;
        t+=x.first-x.second;
        ans=min(ans,t);
    }
    cout<<endl;
    //cout<<ans<<endl;
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