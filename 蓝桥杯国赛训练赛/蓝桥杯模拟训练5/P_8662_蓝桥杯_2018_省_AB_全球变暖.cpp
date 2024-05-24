#include<bits/stdc++.h>

using namespace std;

int n;
char g[1010][1010];
bool st[1010][1010];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};

bool bfs(int x,int y)
{
    queue<pair<int,int>>q;
    st[x][y]=true;
    q.push({x,y});
    
    bool sign=false;
    while(q.size())
    {
        auto t = q.front();
        q.pop();

        if(g[t.first-1][t.second]=='#'&&g[t.first+1][t.second]=='#'&&g[t.first][t.second-1]=='#'&&g[t.first][t.second+1]=='#')
            sign=true;

        for(int i=0;i<=3;i++)
        {
            int a=t.first+dx[i];
            int b=t.second+dy[i];
            if(a<1 || a>n || b<1 || b>n)continue;
            if(g[a][b]=='.')continue;
            if(st[a][b]==true)continue;
            st[a][b]=true;
            q.push({a,b});
        }
    }
    if(sign)return false;
    return true;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>g[i]+1;

    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(g[i][j]=='#' && st[i][j]==false)
                if(bfs(i,j))
                    ans++;

    cout<<ans<<endl;

    return 0;
}