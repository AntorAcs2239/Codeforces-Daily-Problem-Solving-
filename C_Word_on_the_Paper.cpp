#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    char ch[8][8];
    string ans;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            char ch;
            cin>>ch;
            if(ch!='.')
            ans+=ch;
        }
    }
    cout<<ans<<endl;


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