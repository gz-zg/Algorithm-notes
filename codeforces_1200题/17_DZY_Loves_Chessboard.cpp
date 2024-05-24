#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;
char g[110][110];

//BFS写法-->纯粹多此一举hh-->Accepted
// bool st[110][110];
// int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};

// void bfs(int x,int y)
// {
//     queue<pair<int,int>>q;
//     st[x][y]=true;
//     g[x][y]='B';
//     q.push({x,y});

//     while (q.size())
//     {
//         auto t = q.front();
//         q.pop();
//         for(int i=0;i<=3;i++)
//         {
//             int a = t.first + dx[i];
//             int b = t.second + dy[i];
//             if(a<1 || a>n || b<1 || b>m)continue;
//             if(g[a][b]=='-')continue;
//             if(st[a][b])continue;

//             st[a][b]=true;
//             if(g[t.first][t.second]=='B')g[a][b]='W';
//             else g[a][b]='B';
//             q.push({a,b});
//         }
//     }
// }

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%s",g[i]+1);

    // for(int i=1;i<=n;i++)
    //     for(int j=1;j<=m;j++)
    //         if(st[i][j]==false && g[i][j]=='.')
    //             bfs(i,j);


    //普通写法-->一开始居然没有想到hh-->Accepted
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(g[i][j]=='.')
                if( (i+j)%2==0 )g[i][j]='B';
                else g[i][j]='W';

    for(int i=1;i<=n;i++)cout<<g[i]+1<<endl;

    return 0;
}