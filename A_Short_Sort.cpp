#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string a;
    cin>>a;
    string x=a;
    if(x=="abc")
    {
        cout<<"YES"<<endl;
        return;
    }
    swap(x[0],x[1]);
    if(x=="abc")
    {
        cout<<"YES"<<endl;
        return;
    }
    x=a;
    swap(x[1],x[2]);
    if(x=="abc")
    {
        cout<<"YES"<<endl;
        return;
    }
    x=a;
    swap(x[0],x[2]);
    if(x=="abc")
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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