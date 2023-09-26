#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    string a, b;
    cin >> a >> b;
    vector<pair<int, int>> vec;
    if(a==b)
    {
        cout<<"YES"<<endl;
        return;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i] && (a[i] == '0'))
        {
             int idx = -1;
            for (int j = i + 1; j < a.size(); j++)
            {
                if ((a[j] == b[j]) && (a[i] == a[j]))
                    idx = j;
            }
            if (idx != -1)
            {
                string tema,temb;
                tema=a;
                temb=b;
                for(int j=i;j<=idx;j++)tema[j]='0',temb[j]='0';
                if(tema==temb)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
            else break;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i] && (a[i] == '1'))
        {
            int idx = -1;
            for (int j = i + 1; j < a.size(); j++)
            {
                if ((a[j] == b[j]) && (a[i] == a[j]))
                    idx = j;
            }
            if (idx != -1)
            {
                string tema,temb;
                tema=a;
                temb=b;
                for(int j=i;j<=idx;j++)tema[j]='1',temb[j]='1';
                if(tema==temb)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
            else break;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            int idx=-1;
            for (int j = i + 1; j < a.size(); j++)
            {
                if ((a[j] == b[j]) && (a[i] == a[j]))
                    idx = j;
            }
            if (idx != -1)
            {
                vec.push_back({i,idx});
                i=idx;
            }
            else 
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    for(auto x:vec)cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
    // if(vec.size()==1)
    // {
    //     for(int i=vec[0].first;i<=vec[0].second;i++)a[i]='0',b[i]='0';
    //     if(a==b)
    //     {
    //         cout<<"YES"<<endl;
    //     }
    //     else cout<<"NO"<<endl;
    //     return;
    // }
    // else if(vec.size()==2)
    // {
    //     for(int i=vec[0].first;i<=vec[0].second;i++)a[i]='0',b[i]='0';
    //     for(int i=vec[1].first;i<=vec[1].second;i++)a[i]='0',b[i]='0';
    //     if(a==b)cout<<"YES"<<endl;
    //     else cout<<"NO"<<endl;
    // }
    // else cout<<"NO"<<endl;
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