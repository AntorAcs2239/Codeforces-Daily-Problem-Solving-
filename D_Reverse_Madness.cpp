#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int ar[m],br[m];
    for(int i=0;i<m;i++)cin>>ar[i];
    for(int i=0;i<m;i++)cin>>br[i];
    int q;
    cin>>q;
    int swapcount[n+1];
    for(int i=0;i<=n;i++)swapcount[i]=0;
    while(q--)
    {
        int v;
        cin>>v;
        auto idx=upper_bound(ar,ar+m,v);
        idx--;
        int i=idx-ar;
        int a=min(v,ar[i]+br[i]-v);
        a--;
        swapcount[a]++;
    }
    for(int i=0;i<m;i++)
    {
        int a=ar[i];
        int b=br[i];
        a--;
        b--;
        int sum=0;
        for(;a<b;a++,b--)
        {
            sum+=swapcount[a];
            if(sum%2)
            {
                swap(s[a],s[b]);
            }
        }
    }
    cout<<s<<endl;
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