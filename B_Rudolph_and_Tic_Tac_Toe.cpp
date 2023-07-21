#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   char ar[3][3];
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)cin>>ar[i][j];
   }
   if((ar[0][0]==ar[0][1])&&(ar[0][1]==ar[0][2])&&ar[0][0]!='.')
   {
    cout<<ar[0][0]<<endl;
    return;
   }
    if((ar[1][0]==ar[1][1])&&(ar[1][1]==ar[1][2])&&ar[1][0]!='.')
   {
    cout<<ar[1][0]<<endl;
    return;
   }
    if((ar[2][0]==ar[2][1])&&(ar[2][1]==ar[2][2])&&ar[2][0]!='.')
   {
    cout<<ar[2][0]<<endl;
    return;
   }
    if((ar[0][0]==ar[1][0])&&(ar[1][0]==ar[2][0])&&ar[0][0]!='.')
   {
    cout<<ar[0][0]<<endl;
    return;
   }
    if((ar[0][1]==ar[1][1])&&(ar[1][1]==ar[2][1])&&ar[0][1]!='.')
   {
    cout<<ar[0][1]<<endl;
    return;
   }
    if((ar[0][2]==ar[1][2])&&(ar[1][2]==ar[2][2])&&ar[0][2]!='.')
   {
    cout<<ar[0][2]<<endl;
    return;
   }
    if((ar[0][0]==ar[1][1])&&(ar[1][1]==ar[2][2])&&ar[0][0]!='.')
   {
    cout<<ar[0][0]<<endl;
    return;
   }
    if((ar[0][2]==ar[1][1])&&(ar[1][1]==ar[2][0])&&ar[0][2]!='.')
   {
    cout<<ar[0][2]<<endl;
    return;
   }
   cout<<"DRAW"<<endl;
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