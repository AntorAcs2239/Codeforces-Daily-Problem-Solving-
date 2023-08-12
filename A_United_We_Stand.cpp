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
   vector<int>vec1,vec2;
   sort(ar,ar+n);
   int x=ar[n-1];
   for(int i=0;i<n;i++)
   {
    if(ar[i]==x)vec1.push_back(ar[i]);
   }
   for(int i=0;i<n;i++)
   {
    if(ar[i]!=x)vec2.push_back(ar[i]);
   }
   if(vec2.size()==0)cout<<"-1"<<endl;
   else 
   {
    cout<<vec2.size()<<" "<<vec1.size()<<endl;
    for(int i=0;i<vec2.size();i++)cout<<vec2[i]<<" ";
    cout<<endl;
    for(int i=0;i<vec1.size();i++)cout<<vec1[i]<<" ";
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