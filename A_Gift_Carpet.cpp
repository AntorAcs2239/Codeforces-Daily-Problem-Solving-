#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n ,m;
    cin>>n>>m;
    char ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }
    vector<string>vec;
    for(int i=0;i<m;i++)
    {
        string s;
        for(int j=0;j<n;j++)
        {
            s+=ar[j][i];
        }
        vec.push_back(s);
    }
    for(int i=0;i<vec.size();i++)
    {
       for(int j=i+1;j<vec.size();j++)
       {
        for(int k=j+1;k<vec.size();k++)
        {
            for(int p=k+1;p<vec.size();p++)
            {
                string a,b,c,d;
                a=vec[i];
                b=vec[j];
                c=vec[k];
                d=vec[p];
                bool flag=false;
                for(int x=0;x<a.size();x++)
                {
                    if(a[x]=='v')
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag)continue;
                flag=false;
                for(int x=0;x<b.size();x++)
                {
                    if(b[x]=='i')
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag)continue;
                flag=false;
                for(int x=0;x<c.size();x++)
                {
                    if(c[x]=='k')
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag)continue;
                flag=false;
                for(int x=0;x<d.size();x++)
                {
                    if(d[x]=='a')
                    {
                        flag=true;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
       }
    }
    cout<<"NO"<<endl;
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