#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ordered_set st;
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++)
    {
        ll u,v;
        cin>>u>>v;
        vec.push_back({u,v});
    }
    sort(vec.begin(),vec.end());
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=st.size()-st.order_of_key(vec[i].second);
        st.insert(vec[i].second);
    }
    cout<<ans<<endl;
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
