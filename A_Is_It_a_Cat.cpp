#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string tem = "meoww";
    int k = 0;
    int c = 0;
    for (int i = 0; i < n;)
    {
        char ch = tolower(s[i]);
        s[i] = ch;
        if (s[i] == tem[k])
        {
            
            c++;
            k++;
            int j=i+1;
            for (; j < n; j++)
            {
                char ch = tolower(s[j]);
                s[j] = ch;
                if (s[j] != s[i])
                {
                    i = j;
                   
                    break;
                }
            }
            if(j==n)break;
        }
        else
        {
           // cout<<c<<endl;
            cout << "NO" << endl;
            return;
        }
    }
    if (c < 4)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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