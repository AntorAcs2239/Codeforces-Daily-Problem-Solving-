#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
   int n,m;
   vector<int>vec;
   cin>>n>>m;
   if(n==m)
   {
    cout<<"YES"<<endl;
    return;
   }
   vec.push_back(n);
   while(1)
   {
    bool flag=false;
    vector<int>tem;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]%3==0)
        {
            flag=true;
            int a=vec[i]/3;
            int b=a*2;
            if(a==m||b==m)
            {
                cout<<"YES"<<endl;
                return;
            }
            tem.push_back(a);
            tem.push_back(a*2);
        }
    }
    if(!flag)
    {
        cout<<"NO"<<endl;
        return;
    }
    vec.clear();
    vec=tem;
   }
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