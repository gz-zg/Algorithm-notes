#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    priority_queue<pair<int,int>>dui;
    for(int i=1;i<=n;i++)
    {
        int x; scanf("%d",&x);
        if(x!=0)dui.push({x,i});
    }
    vector<pair<int,int>>ans;
    while(dui.size()>=2)
    {
        auto x=dui.top(); dui.pop();
        auto y=dui.top(); dui.pop();
        ans.push_back({x.second,y.second});
        x.first--; y.first--;
        if(x.first!=0)dui.push(x);
        if(y.first!=0)dui.push(y);
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)printf("%d %d\n",i.first,i.second);
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}