#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll ar[n];
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
        cin >> ar[i], sum1 += ar[i];
    ll br[m];
    for (int j = 0; j < m; j++)
        cin >> br[j], sum2 += br[j];
    ll t = 1;
    vector<pair<ll, ll>> vec;
    while (t <= min((ll)1000, k))
    {
        if (t % 2)
        {
            ll min = ar[0];
            int idx = 0;
            for (int i = 0; i < n; i++)
            {
                if (ar[i] < min)
                {
                    idx = i;
                    min = ar[i];
                }
            }
            ll mx = br[0];
            int idx2 = 0;
            for (int i = 0; i < m; i++)
            {
                if (br[i] > mx)
                {
                    mx = br[i];
                    idx2 = i;
                }
            }
            if (ar[idx]<br[idx2])
            {
                ll tem = ar[idx];
                ar[idx] = br[idx2];
                br[idx2] = tem;
            }
            sum1 = 0, sum2 = 0;
            for (int i = 0; i < n; i++)
                sum1 += ar[i];
            for (int j = 0; j < m; j++)
                sum2 += br[j];
            vec.push_back({sum1, sum2});
        }
        else
        {
            ll min = br[0];
            int idx = 0;
            for (int i = 0; i < m; i++)
            {
                if (br[i] < min)
                {
                    idx = i;
                    min = br[i];
                }
            }
            ll mx = ar[0];
            int idx2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (ar[i] > mx)
                {
                    mx = ar[i];
                    idx2 = i;
                }
            }
            if (br[idx]<ar[idx2])
            {
                int tem = br[idx];
                br[idx] = ar[idx2];
                ar[idx2] = tem;
            }
            sum1 = 0, sum2 = 0;
            for (int i = 0; i < n; i++)
                sum1 += ar[i];
            for (int j = 0; j < m; j++)
                sum2 += br[j];
            vec.push_back({sum1, sum2});
        }
        t++;
    }
    for(auto x:vec)
    {
        //cout<<x.first<<" "<<x.second<<endl;
    }
    if (k % 2)
    {
        int x = vec.size();
        if (x % 2 == 0)
        {
            x--;
        }
        cout << vec[x - 1].first << endl;
    }
    else
    {
        int x = vec.size();
        if (x % 2 == 1)
        {
            x--;
        }
        cout << vec[x - 1].first << endl;
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