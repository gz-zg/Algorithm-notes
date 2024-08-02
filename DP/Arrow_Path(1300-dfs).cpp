#include <bits/stdc++.h>
using namespace std;

int n;
char g[3][200010];
vector<vector<bool>>dp;

int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};

void dfs(int x,int y)
{
    dp[x][y]=true;
    if((x+y)%2==0)
    {
        for(int i=0;i<=3;i++)
        {
            int a=x+dx[i];
            int b=y+dy[i];
            if(a<1 || a>2 || b<1 || b>n)continue;
            if(dp[a][b]==true)continue;
            dfs(a,b);
        }
    }
    else
    {
        if(g[x][y]=='<'){
            if(dp[x][y-1]==false)dfs(x,y-1);
        }
        else{
            if(dp[x][y+1]==false)dfs(x,y+1);
        }
    }
}

void solve()
{
    cin>>n;
    cin>>g[1]+1>>g[2]+1;
    dp=vector<vector<bool>>(3,vector<bool>(n+10,false));
    dfs(1,1);
    if(dp[2][n])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}