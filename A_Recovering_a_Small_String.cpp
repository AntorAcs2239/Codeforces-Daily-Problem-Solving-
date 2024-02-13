#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    unordered_map<char,int>mp;
    char ch='a';
    for(int i=1;i<=26;i++)
    {
        mp[ch]=i;
        ch++;
    }
    string ans;
    for(char ch='a';ch<='z';ch++)
    {
        for(char ch2='a';ch2<='z';ch2++)
        {
            for(char ch3='a';ch3<='z';ch3++)
            {
                int a=mp[ch]+mp[ch2]+mp[ch3];
                if(ans.size()==0 && a==n)
                {
                    ans+=ch;
                    ans+=ch2;
                    ans+=ch3;
                }
                else if(a==n)
                {
                    string tem;
                    tem+=ch;
                    tem+=ch2;
                    tem+=ch3;
                    ans=min(ans,tem);
                }
            }
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
