#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   string s;
   cin>>s;
   string tem;
   tem+='0';
   tem+=s;
   s=tem;
   int idx=s.size();
   for(int i=s.size()-2;i>=0;i--)
   {
    int c=s[i+1]-'0';
    bool flag=false;
    if(s[i]=='9')
    {
        for(int j=i-1;j>=0;j--)
        {
            if(s[j]<'9')
            {
                s[j]++;
                i=j;
                flag=true;
                idx=j;
                break;
            }
        }
    }
    if(c>=5&&!flag)
    {
        s[i]++;
        idx=i;
    }
   }
   for(int i=idx+1;i<s.size();i++)s[i]='0';
   if(s[0]=='0')
   {
    reverse(s.begin(),s.end());
    s.pop_back();
    reverse(s.begin(),s.end());
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