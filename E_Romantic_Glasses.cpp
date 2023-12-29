#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool check(long long arr[], int n)
{
    set<ll>st;
    long long evenSum = 0, oddSum = 0;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)arr[i]*=-1;
    }
    long long sum=0;
    st.insert(0);
    for (int i = 0; i < n; ++i)
    {
        sum+=arr[i];
        if (st.find(sum)!=st.end())
        {
            return true;
        }
        st.insert(sum);
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    long long ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    bool flag = check(ar, n);
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
