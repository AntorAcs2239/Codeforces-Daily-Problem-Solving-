#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n;
   cin>>n;
   ll ar[n],br[n];
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
   }
   for(int i=0;i<n;i++)cin>>br[i];
   vector<int>ans;
   ll tem=LLONG_MIN;
   for(int i=0;i<n;i++)
   {
     tem=max(tem,ar[i]-br[i]);
   }
   for(int i=0;i<n;i++)
   {
    if(ar[i]-br[i]==tem)ans.push_back(i+1);
   }
   cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
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