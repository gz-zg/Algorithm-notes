#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

char g[20][20];

signed main()
{
    for(int i=1;i<=9;i++)cin>>g[i]+1;

    int x,y;
    for(int i=4;i<=6;i++)
        for(int j=4;j<=6;j++)
            if(g[i][j]=='8')
                x=i,y=j;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
            if(i!=x || j!=y)cout<<'*';
            else cout<<'8';
        cout<<endl;
    }

    return 0;
}