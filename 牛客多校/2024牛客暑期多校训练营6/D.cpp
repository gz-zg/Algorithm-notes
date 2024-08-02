#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m; 
set<int>pd;
int p[100010];
int du[100010];
vector<int>g[100010];
vector<pair<int,int>>ans;

int find(int x)
{
    if(x!=p[x])p[x]=find(p[x]);
    return p[x];
}

void dfs(int u)
{
    for(int i:g[u])
    {
        int fi=find(i),fu=find(u);
        if(fi!=fu)
        {
            ans.push_back({u,i});
            p[fi]=fu;
            dfs(i);
        }
    }
}

void solve()
{
    cin >> n >> m;
    for(int i=1 ;i<=n; i++)p[i]=i;

    for(int i=1 ;i<=m ;i++)
    {
        string op; int a, b;
        cin>>a>>b>>op;
        g[a].push_back(b);
        g[b].push_back(a);
        if(op=="Lun")
        {
            ans.push_back({a,b});
            du[a]++, du[b]++;
            pd.insert(a),pd.insert(b);
            int fa = find(a), fb = find(b);
            p[fa] = fb;
        }
    }

    if(pd.size()==0)
    {
        dfs(1);
        cout << "YES\n" << ans.size() << "\n";
        for(auto i:ans)cout<<i.x<<" "<<i.y<<endl;
        return;
    }

    for(int i:pd)
        if(du[i]<2)
        {
            cout << "NO\n";
            return;
        }

    for(int i:pd)dfs(i);

    cout << "YES\n" << ans.size() << "\n";
    for(auto i:ans)cout<<i.x<<" "<<i.y<<endl;
}


signed main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    while(t--)solve();

return 0;
}