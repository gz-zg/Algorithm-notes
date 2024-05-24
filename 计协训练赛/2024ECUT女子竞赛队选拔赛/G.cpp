#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[1010][1010];
bool st[1010][1010];

void bfs(int sx,int sy)
{
    queue<pair<int,int>>q;
    st[sx][sy]=true;
    q.push({sx,sy});

    while(q.size())
    {
        auto t = q.front();
        q.pop();

        int x = t.first, y = t.second;
        for(int i=1;i<=1000;i++)
            if(a[i][y]==1 && st[i][y]==false)
            {
                st[i][y]=true;
                q.push({i,y});
            }
        for(int i=1;i<=1000;i++)
            if(a[x][i]==1 && st[x][i]==false)
            {
                st[x][i]=true;
                q.push({x,i});
            }
    }
}

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y; cin>>y>>x;
        x=1001-x;
        a[x][y]=1;
    }

    int cnt=0;
    for(int i=1;i<=1000;i++)
        for(int j=1;j<=1000;j++)
            if(a[i][j]==1 && st[i][j]==false)
            {
                bfs(i,j);
                cnt++;
            } 
    cout<<cnt-1<<endl;

    return 0;
}