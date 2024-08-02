//dijikstra的变形应用
#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int>g[100010];

void doit()
{
    vector<int>ans;
    bool st[100010]{};
    priority_queue<int,vector<int>,greater<int>>dui;
    dui.push(1);
    while(dui.size())
    {
        int t = dui.top(); dui.pop();
        if(st[t])continue;
        st[t]=true;
        ans.push_back(t);
        for(int i:g[t])
            if(st[i]==false)
                dui.push(i);
    }
    for(int i:ans)cout<<i<<" ";
}

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b; scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    doit();

    return 0;
}