#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   string s;
   cin>>s;
   string tem=s;
   for(int i=0,j=s.size()-1;i<j;i++,j--)
   {
    swap(s[i],s[0]);
    swap(s[j],s[s.size()-1]);
    if(s!=tem)
    {
        cout<<"YES"<<endl;
        return;
    }
   }
   cout<<"NO"<<endl;
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