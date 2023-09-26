#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// Array to store bit-wise
// prefix count
#define MAX 200005
#define bitscount 32
int prefix_count[bitscount][MAX];
 
// Function to find the prefix sum
void findPrefixCount(ll arr[], ll n)
{
 
    // Loop for each bit
    for (int i = 0; i < bitscount; i++) {
 
        // Loop to find prefix count
        prefix_count[i][0] = ((arr[0] >> i) & 1);
        for (int j = 1; j < n; j++) {
            prefix_count[i][j] = ((arr[j] >> i) & 1);
            prefix_count[i][j] += prefix_count[i][j - 1];
        }
    }
}
 
// Function to answer query
int rangeAnd(ll l, ll r)
{
 
    // To store the answer
    int ans = 0;
 
    // Loop for each bit
    for (int i = 0; i < bitscount; i++) {
        int x;
        if (l == 0)
            x = prefix_count[i][r];
        else
            x = prefix_count[i][r]
                - prefix_count[i][l - 1];
 
        // Condition for ith bit
        // of answer to be set
        if (x == r - l + 1)
            ans = (ans | (1 << i));
    }
 
    return ans;
}
void solve()
{
    ll n,k,x;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    findPrefixCount(ar, n);
    ll m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        ll l=a,r=n-1;
        ll mid,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(rangeAnd(a,mid)>=b)
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        if(ans==-1)cout<<"-1"<<" ";
        else cout<<ans+1<<" ";
    }
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