#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int a,b,c;
   cin>>a>>b>>c;
   if(a<b+c)cout<<a+a-1<<endl;
   else if(a>b+c)cout<<b+c+b+c+1<<endl;
   else cout<<a+a-1<<endl;
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