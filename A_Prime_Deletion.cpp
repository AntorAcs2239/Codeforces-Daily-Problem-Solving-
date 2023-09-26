#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isprime(int n)
{
    if(n==1)return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            int n=(s[i]-'0')*10;
            n+=s[j]-'0';
            if(isprime(n))
            {
                cout<<n<<endl;
                return;
            }
        }
    }
    cout<<"-1"<<endl;
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