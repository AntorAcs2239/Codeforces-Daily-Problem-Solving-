#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   sort(ar,ar+n,greater<int>());
   if(ar[0]==ar[1])
   {
    swap(ar[n-1],ar[0]);
   }
   int t=ar[0];
   for(int i=1;i<n;i++)
   {
    if(ar[i]==t)
    {
        cout<<"NO"<<endl;
        return;
    }
    t+=ar[i];
   }
   cout<<"YES"<<endl;
   for(int i=0;i<n;i++)cout<<ar[i]<<" ";
   cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}