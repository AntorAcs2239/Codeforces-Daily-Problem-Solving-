#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>graph[n+5];
    set<pair<int,int>>st;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        if(st.find({u,i+1})==st.end())
        {
            graph[i+1].push_back(u);
            st.insert({u,i+1});
        }
        if(st.find({i+1,u})==st.end())
        {
            graph[u].push_back(i+1);
            st.insert({i+1,u});
        }
    }
    int c=0;
    int com=0;
    int vis[n+5];
    for(int i=0;i<=n;i++)vis[i]=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            c++;
            vector<int>vec;
            vec.push_back(i);
            queue<int>q;
            q.push(i);
            vis[i]=1;
            while(!q.empty())
            {
                int f=q.front();
                q.pop();
                for(auto x:graph[f])
                {
                    if(vis[x]==0)
                    {
                        vis[x]=1;
                        q.push(x);
                        vec.push_back(x);
                    }
                }
            }
            bool flag=true;
            for(int i=0;i<vec.size();i++)
            {
                if(graph[vec[i]].size()!=2)
                {
                    flag=false;
                    break;
                }
                //cout<<graph[vec[i]].size()<<" ";
            }
            //cout<<endl;
            if(flag)com++;
        }
    }
    if(com==0)cout<<"1"<<" "<<c<<endl;
    else if(c==com)cout<<com<<" "<<com<<endl;
    else {
        cout<<com+1<<" "<<c<<endl;
    }
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