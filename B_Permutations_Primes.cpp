#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(int n)
{
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int ar[200005];
void solve()
{
   int n;
   cin>>n;
   int m=(n+1)/2;
   ar[m]=1;
   int p=0,np=0;
   int j1=1,j2=n;
   int k=2;
   for(int i=1;i<=n;i++)
   {
      if(i!=m)
      {
        if(p==0)
        {
            ar[j2]=k;
            j2--;
            p=1;
           
        }
        else 
        {
            ar[j1]=k;
            j1++;
            p=0;
        }
         k++;
      }
   }
   for(int i=1;i<=n;i++)cout<<ar[i]<<" ";
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