#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, m;
    cin >> n >> m;
    char ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> ar[i][j];
    }
    for(int j=0;j<m;j++)
    {
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i][j]=='L')
            {
                if(x%2==0)
                {
                    ar[i][j]='W';
                    ar[i][j+1]='B';
                }
                else 
                {
                    ar[i][j]='B';
                    ar[i][j+1]='W';
                }
                x++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]=='U')
            {
                if(x%2==0)
                {
                    ar[i][j]='W';
                    ar[i+1][j]='B';
                }
                else 
                {
                    ar[i][j]='B';
                    ar[i+1][j]='W';
                }
                x++;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        int x=0,y=0;
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]=='B')x++;
            else if(ar[i][j]=='W') y++;
        }
        if(x!=y)
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    for(int j=0;j<m;j++)
    {
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i][j]=='B')x++;
            else if(ar[i][j]=='W') y++;
        }
        if(x!=y)
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
           cout<<ar[i][j];
        cout<<endl;
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