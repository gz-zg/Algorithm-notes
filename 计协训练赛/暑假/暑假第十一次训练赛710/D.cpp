#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[200010];

void solve()
{
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),mp[a[i]]++;
    priority_queue<int>dui;
    for(auto i:mp)dui.push(i.second);
    while(dui.size()>=2)
    {
        int x=dui.top(); dui.pop();
        int y=dui.top(); dui.pop();
        x--,y--;
        if(x>=1)dui.push(x);
        if(y>=1)dui.push(y);
    }
    if(dui.size()==0)cout<<0<<endl;
    else cout<<dui.top()<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}