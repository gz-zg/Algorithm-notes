#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[N];
LL dp[N];

vector<int>g[N];  //这个【vector数组模拟的邻接表】并不比【普通数组模拟的邻接表】慢多少，并且它好写的多！！！
// int h[N],e[2*N],ne[2*N],idx=0;
// void add(int a,int b){e[idx]=b,ne[idx]=h[a],h[a]=idx,idx++;}

LL dfs(int u,int fa)
{
    dp[u]=a[u];
    // for(int i=h[u];i!=-1;i=ne[i])
    for(int i:g[u])
    {
        if(i==fa)continue;
        dp[u]+=max(dfs(i,u),0LL);
    }
    return dp[u];
}

int main()
{
    // memset(h,-1,sizeof h);
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    int a,b;
    // while(scanf("%d%d",&a,&b)!=-1)add(a,b),add(b,a);
    while(scanf("%d%d",&a,&b)!=-1)g[a].push_back(b),g[b].push_back(a);
    
    dfs(1,0);

    LL ans=0;
    for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
    cout<<ans<<endl;

    return 0;
}