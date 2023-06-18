#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"0"<<endl;
        return;
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])x++;
    }
    if(x==1)
    {
        cout<<"1"<<endl;
        return;
    }
    reverse(a.begin(),a.end());
    x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])x++;
    }
    if(x==1||x==0)
    {
        cout<<"2"<<endl;
        return;
    }
    int p=(n+1)/2;
    if(x>=p)
    {
        cout<<x*2-1<<endl;
    }
    else cout<<x*2<<endl;
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