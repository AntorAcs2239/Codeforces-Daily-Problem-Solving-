#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   string t="codeforces";
   string s;
   cin>>s;
   int c=0;
   for(int i=0;i<t.size();i++)
   {
    if(s[i]!=t[i])c++;
   }
   cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}