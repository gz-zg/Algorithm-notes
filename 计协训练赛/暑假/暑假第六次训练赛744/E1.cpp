#include <bits/stdc++.h>
using namespace std;

int a[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    deque<int>q;
    q.push_back(a[1]);
    for(int i=2;i<=n;i++)
        if(a[i]<q.front())q.push_front(a[i]);
        else q.push_back(a[i]);
    for(int i:q)cout<<i<<" ";
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}