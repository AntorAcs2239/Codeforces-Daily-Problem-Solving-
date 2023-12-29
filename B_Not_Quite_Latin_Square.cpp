#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    char ar[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]=='?')
            {
                int a=0,b=0,c=0;
                for(int k=0;k<3;k++)
                {
                    if(ar[i][k]=='A')a=1;
                    if(ar[i][k]=='B')b=1;
                    if(ar[i][k]=='C')c=1;
                }
                if(a==0)cout<<"A"<<endl;
                else if(b==0)cout<<"B"<<endl;
                else cout<<"C"<<endl;
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
