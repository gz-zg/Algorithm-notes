//想复杂了啊，我枚举了所有情况hh,不过居然和官方题解的思路大体一样
//另一种思路：上下左右四条边上，每条边某种颜色都有就可以涂完，否则肯定有没办法涂到的最边缘。
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

char g[520][520];

void solve()
{
    int n,m; cin>>n>>m;
    memset(g,'\0',sizeof g);
    for(int i=1;i<=n;i++)scanf("%s",g[i]+1);
    if(n==1 && m!=1)
    {
        if(g[1][1]==g[1][m])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(n!=1 && m==1)
    {
        if(g[1][1]==g[n][1])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(n==1 && m==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(g[1][1]==g[n][m] || g[1][m]==g[n][1])cout<<"YES"<<endl;
        else
        {
            if(g[1][1]==g[n][1])
            {
                for(int i=2;i<=n-1;i++)
                    if(g[i][m]==g[1][1])
                    {
                        cout<<"YES"<<endl;
                        return;
                    }
            }
            if(g[1][1]==g[1][m])
            {
                for(int i=2;i<=m-1;i++)
                    if(g[n][i]==g[1][1])
                    {
                        cout<<"YES"<<endl;
                        return;
                    }
            }
            if(g[1][m]==g[n][m])
            {
                for(int i=2;i<=n-1;i++)
                    if(g[i][1]==g[1][m])
                    {
                        cout<<"YES"<<endl;
                        return;
                    }
            }
            if(g[n][1]==g[n][m])
            {
                for(int i=2;i<=m-1;i++)
                    if(g[1][i]==g[n][1])
                    {
                        cout<<"YES"<<endl;
                        return;
                    }
            }
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}