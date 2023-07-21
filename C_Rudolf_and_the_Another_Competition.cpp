#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first>b.first)return true;
    if(a.first==b.first&&a.second<b.second)return true;
    return false;
}
void solve()
{
   
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