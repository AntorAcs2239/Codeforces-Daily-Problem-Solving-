#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    double n,m,c;
    cin>>n>>m>>c;
     double t=(n+m)/2;
    n=max(n,m);
   
    t=n-t;
    t=(t/c);
    cout<<ceil(t)<<endl;
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