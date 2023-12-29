#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    int neg=0;
    int z=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<0)neg++;
        if(ar[i]==0)z++;
    }
    if(neg%2==1)
    {
        cout<<"0"<<endl;
        return ;
    }
    if(z>0)
    {
        cout<<"0"<<endl;
        return;
    }
    if(neg==0)
    {
        cout<<"1"<<endl;
        cout<<"1 0"<<endl;
        return;
    }
    else 
    {
        cout<<"1"<<endl;
        for(int i=0;i<n;i++)
        {
            if(ar[i]<0)
            {
                cout<<i+1<<" "<<"0"<<endl;
                return;
            }
        }
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