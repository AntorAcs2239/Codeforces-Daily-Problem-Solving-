#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans=0;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int x = 0, y = 0;
        char c = ch;
        char c2 = toupper(ch);
        for (int j = 0; j < n; j++)
        {

            if (s[j] == c)
                x++;
            if (s[j] == c2)
                y++;
        }
        int t=min(x,y);
        ans+=t;
        int m=max(x,y);
        m-=t;
        m=m/2;
        int p=min(k,m);
        ans+=p;
        k-=p;
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