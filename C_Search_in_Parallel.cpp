#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ar[n];
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        vec.push_back({ar[i],i+1});
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    vector<int>ans1,ans2;
    for(int i=0;i<n;i++)
    {
        int t=vec[i].first;
        int t2=vec[i].second;
        int x=(ans1.size()*a)+a;
        int y=(ans2.size()*b)+b;
        if(x<=y)
        {
            ans1.push_back(t2);
        }
        else ans2.push_back(t2);
    }
    cout<<ans1.size()<<" ";
    for(int i=0;i<ans1.size();i++)cout<<ans1[i]<<" ";
    cout<<endl;
     cout<<ans2.size()<<" ";
    for(int i=0;i<ans2.size();i++)cout<<ans2[i]<<" ";
    cout<<endl;

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