#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    char ar[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
           cin>>ar[i][j]; 
        }
    }
    int ans=0;

    for(int i=0;i<5;i++)
    {
        int x=0;
        for(int j=0;j<5;j++)
        {
            if(i==j)
            {
                for(int k=i;k<10-i;k++)
                {
                    if(ar[i][k]=='X')x++;
                    if(ar[9-i][k]=='X')x++;
                }
                for(int k=j+1;k<10-j-1;k++)
                {
                    if(ar[k][j]=='X')x++;
                    if(ar[k][9-j]=='X')x++;
                }
                ans+=(i+1)*x;
            }
        }
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