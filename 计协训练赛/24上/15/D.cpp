#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int b[N],p[N];

void solve()
{
    int n; cin>>n;
    int gen;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
        if(i==b[i])gen=i;
    }
    for(int i=1;i<=n;i++)scanf("%d",&p[i]);

    if(p[1]!=gen)cout<<-1<<endl;//p[1]一定得是根节点，否则根节点在后面不满足dist升序
    else
    {
        vector<int>dist(n+1,-1);
        dist[p[1]]=0;
        for(int i=2;i<=n;i++)//循环遍历p数组，当遍历到某一个节点时，它的父节点一定要被计算过，
        {                    //否则后面再计算父亲节点，父亲节点dist > 儿子节点dist，不满足dist升序
            if(dist[b[p[i]]]==-1){cout<<-1<<endl;return;}
            dist[p[i]]=dist[p[i-1]]+1;
        }
        for(int i=1;i<=n;i++)
            cout<<dist[i]-dist[b[i]]<<" ";
        cout<<endl;
    }
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