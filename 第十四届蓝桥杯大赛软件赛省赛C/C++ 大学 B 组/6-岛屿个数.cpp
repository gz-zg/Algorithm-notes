#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;
char a[55][55];
bool st[55][55];
pair<int,int>q[4000];

void hai(int sx,int sy)
{
    st[sx][sy]=true;
    a[sx][sy]='x';
    int hh=0,tt=0;
    q[0]={sx,sy};

    while(hh<=tt)
    {
        auto t = q[hh++];
        for(int i=t.first-1;i<=t.first+1;i++)
            for(int j=t.second-1;j<=t.second+1;j++)
            {
                if(i==t.first && j==t.second)continue;
                if(i<0 || i>n+1 || j<0 || j>m+1)continue;
                if(st[i][j]==true)continue;
                if(a[i][j]=='0')
                {
                    st[i][j]=true;
                    a[i][j]='x';
                    q[++tt]={i,j};
                }
            }
    }
}

int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
void bfs(int sx,int sy)
{
    st[sx][sy]=true;
    int hh=0,tt=0;
    q[0]={sx,sy};

    while(hh<=tt)
    {
        auto t = q[hh++];
        for(int i=0;i<=3;i++)
        {
            int aa=t.first+dx[i];
            int bb=t.second+dy[i];
            if(aa<1 || aa>n || bb<1 || bb>m)continue;
            if(st[aa][bb]==true)continue;
            if(a[aa][bb]=='1')
            {
                st[aa][bb]=true;
                q[++tt]={aa,bb};
            }
        }
    }
}

void solve()
{
    cin>>n>>m;
    memset(a,'0',sizeof a);  //这里可以将字符数组a中每块内存中的字符都设置想要的字符
    memset(st,false,sizeof st);
    for(int i=1;i<=n;i++)scanf("%s",a[i]+1);  //这里在m+1列那么的'0'变成了'\0' !!!
    for(int i=1;i<=n;i++)a[i][m+1]='0'; //把'\0'变回'0'
    hai(0,0);

    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]=='1' && st[i][j]==false && a[i][j-1]=='x')
            {
                ans++;
                bfs(i,j);
            }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}