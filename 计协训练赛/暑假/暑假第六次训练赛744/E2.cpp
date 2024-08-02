#include <bits/stdc++.h>
#define int long long
using namespace std;

int n; 
int a[200010];
vector<int>c;  //树状数组

void add(int x,int y)
{
    for(;x<=n;x+=(x&-x))c[x]+=y;
}

int find(int x)
{
    int sum=0;
    for(;x;x-=(x&-x))sum+=c[x];
    return sum;
}

void solve()
{
    cin>>n;
    vector<int>b;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]), b.push_back(a[i]);

    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    map<int,int>mp;
    for(int i=0;i<b.size();i++)mp[b[i]]=i+1;
    
    int ans=0;
    c=vector<int>(n+10,0);
    for(int i=1;i<=n;i++)
    {
        ans+=min(find(mp[a[i]]-1),find(n)-find(mp[a[i]]));
        add(mp[a[i]],1);
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}