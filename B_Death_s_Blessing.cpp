#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n;
  cin >> n;
  vector<pair<ll, ll>> br;
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    ans += x;
  }
  ll m = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    ans += x;
    m=max(m,x);
  }
  cout<<ans-m<<endl;
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