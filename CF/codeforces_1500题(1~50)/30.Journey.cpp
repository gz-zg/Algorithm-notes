#include <bits/stdc++.h>
using namespace std;

vector<int>g[100010];  //自带每个点的度数信息
long double ans=0;

void dfs(int u,int pre,long double v,int dep)
{
    if(g[u].size()==1 && u!=1)
    {
        ans+=(long double)dep/v;
        return;
    }

    for(int i:g[u])
        if(i!=pre)
            if(u!=1)dfs(i,u,v*(g[u].size()-1),dep+1);
            else dfs(i,u,v*g[u].size(),dep+1);
}

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        int a,b; scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1,0,1,0);
    //cout<<ans<<endl;这样是错误的，因为C++中cout默认情况下会在输出浮点数时保留6位有效数字，这会导致精度不够
    printf("%.15Lf",ans);

    return 0;
}