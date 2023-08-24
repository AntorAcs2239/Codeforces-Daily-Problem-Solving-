#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    vector<int>ans;
    ans.push_back(ar[0]);
    for(int i=1;i<n;i++)
    {
        if(ar[i]>=ar[i-1])ans.push_back(ar[i]);
        else 
        {
            if(ar[i]==1)
            {
                ans.push_back(1);
                ans.push_back(1);
            }
            else 
            {
                ans.push_back(ar[i]-1);
                ans.push_back(ar[i]);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
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