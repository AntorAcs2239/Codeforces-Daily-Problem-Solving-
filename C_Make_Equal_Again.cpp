#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int a=ar[0];
    int i=0;
    while(ar[i]==a)
    {
        i++;
    }
    int j=n-1;
    while(ar[j]==a)
    {
        j--;
    }
    if(i>j)
    {
        cout<<"0"<<endl;
        return;
    }
    int ans1=j-i+1;
    i=0;
    j=n-1;
    a=ar[n-1];
    while(ar[i]==a)
    {
        i++;
    }
    while(ar[j]==a)
    {
        j--;
    }
    if(i>j)
    {
        cout<<"0"<<endl;
        return;
    }
    cout<<min(ans1,j-i+1)<<endl;
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
