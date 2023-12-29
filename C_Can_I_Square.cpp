#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        long long v;
        cin>>v;
        sum+=v;
    }
    long long s=sqrt(sum);
    if(s*s==sum)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
