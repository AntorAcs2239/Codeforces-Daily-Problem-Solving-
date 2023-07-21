#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   int n;
   cin>>n;
   char ans[n];
   int smallest=n+1;
   for(int i=1;i<n;i++)
   {
    if(n%i)
    {
        smallest=i;
        break;
    }
   }
   for(int i=0;i<n;i++)
   {
    ans[i]='a'+(i%smallest);
   }
   for(int i=0;i<n;i++)cout<<ans[i];
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