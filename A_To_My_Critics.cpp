#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=10)cout<<"YES"<<endl;
    else if(a+c>=10)cout<<"YES"<<endl;
    else if(b+c>=10)cout<<"YES"<<endl;
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