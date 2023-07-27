#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n;
    ll ar[n-1];
    for(int i=0;i<n-1;i++)cin>>ar[i];
    ll t=(n*(n+1))/2;
    if(ar[n-2]>t)
    {
        cout<<"NO"<<endl;
        return;
    }
    int c=0;
    int dif;
    for(int i=1;i<n-1;i++)
    {
        if(ar[i]-ar[i-1]>n)
        {
            c++;
            dif=ar[i]-ar[i-1];
        }
    }
    if(c>1)
    {
        cout<<"NO"<<endl;
        return;
    }
    set<int>st;
    if(ar[0]==1||ar[0]==2)st.insert(ar[0]);
    for(int i=1;i<n-1;i++)
    {
        if(ar[i]-ar[i-1]<=n)
        {
            if(st.find(ar[i]-ar[i-1])!=st.end())
            {
                cout<<"NO"<<endl;
                return;
            }
            st.insert(ar[i]-ar[i-1]);
        }
    }
    if(ar[n-2]!=t)
    {
        int x=t-ar[n-2];
        if(st.find(x)!=st.end())
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    vector<int>vec;
    map<int,int>idx;
    for(int i=1;i<=n;i++)
    {
        if(st.find(i)==st.end())
        {
            vec.push_back(i);
        }
        else idx[i]=1;
    }
    
    if(ar[0]>2)
    {
        bool flag=false;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]==ar[0])
            {
                flag=true;
                idx[vec[i]]=1;
                break;
            }
            bool t=false;
            for(int j=i+1;j<vec.size();j++)
            {
                int x=vec[i]+vec[j];
                if(x==ar[0])
                {
                    flag=true;
                    t=true;
                    idx[vec[i]]=1;
                    idx[vec[j]]=1;
                    break;
                }
            }
            if(t)break;
        }
    }
    vec.clear();
    for(int i=1;i<=n;i++)
    {
        if(idx[i]==0)
        {
            vec.push_back(i);
        }
    }
    if(vec.size()==0)
    {
        cout<<"YES"<<endl;
        return;
    }
//    if(c==1)
//    {
//     if(vec.size()!=2)
//     {
//         cout<<"NO"<<endl;
//         return;
//     }
//     int x=vec[0]+vec[1];
//     if(x!=dif)
//     {
//         cout<<"NO"<<endl;
//         return;
//     }
//    }
   cout<<"YES"<<endl;
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