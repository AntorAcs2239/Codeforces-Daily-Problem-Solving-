#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool v(char ch)
{
    if(ch=='a'||ch=='e')return true;
    return false;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<string>vec;
    string tem;
    for(int i=0;i<s.size();i++)
    {
        if(i>0)
        {
            if((v(s[i])&&v(s[i-1])) || (!v(s[i])&&!v(s[i-1])))
            {
                vec.push_back(tem);
                tem="";
            }
        }
        tem+=s[i];
    }
    if(tem.size()>0)vec.push_back(tem);
    string ans;
    for(auto x:vec)
    {
        int t=(x.size()/2)-1;
        int i=0;
        for(;i<t*2;i+=2)
        {
            string tt;
            tt+=x[i];
            tt+=x[i+1];
            ans+=tt;
            ans+='.';
        }
        for(;i<x.size();i++)
        {
            ans+=x[i];
        }
        ans+='.';
    }
    if(ans.back()=='.')ans.pop_back();
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
