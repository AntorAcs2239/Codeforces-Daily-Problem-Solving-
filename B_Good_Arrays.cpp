#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    ll ar[n];
    ll br[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    unordered_map<int, int> idx;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 1)
        {
            br[i] = 2;
            sum -= 2;
            idx[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sum < 0)
        {
            cout << "NO" << endl;
            return;
        }
        if (idx[i] == 0)
        {
            br[i]=1;
            sum--;
        }
    }
    if (sum < 0)
    {
        cout << "NO" << endl;
        return;
    }
    bool flag=true;
     for(int i=0;i<n;i++)
    {
        if(br[i]+sum!=ar[i])
        {
          br[i]+=sum;
          flag=false;
          break;
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==br[i])
        {
           cout<<"NO"<<endl;
           return;
        }
    }
    cout<<"YES"<<endl;
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