/*
思路
如果可以分成两堆那么一定具有以下性质：
1.每张骨牌正反面不同。
2.每个数字一定恰好出现2次（假设某个数字出现少于2次，由于一共有2*n个数字（数字范围在1~n之间），那么一定会有其他数字出现多于2次，那么一定不能分成两堆使得这个数字在两堆出现且仅出现一次）
3.如果把同时在一张骨牌中出现的数字都连一条边，那么最终会形成由一个或多个环（无向图意义上的环）。
（成环原因：因为每个数字都会出现两次，因此每个数字度数都是2，因此满足环的性质）
4.如果能分两堆，那么构成的所有环（每个连通块）中，都是偶数环（边数为偶数条，里面含有的数字种类也是偶数个）
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[200010],b[200010];
int p[200010];
int num[200010];

int find(int x)
{
    if(x!=p[x])p[x]=find(p[x]);
    return p[x];
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)p[i]=i,num[i]=1;
    vector<int>cnt(n+10,0);
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i],cnt[a[i]]++,cnt[b[i]]++;
    
    bool sign=true;
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]!=2)sign=false;
        if(a[i]==b[i])sign=false;
    }
    if(sign==false){cout<<"NO"<<endl;return;}

    for(int i=1;i<=n;i++)
    {
        int fa=find(a[i]), fb=find(b[i]);
        if(fa!=fb)
        {
            num[fb]+=num[fa];
            num[fa]=0;
            p[fa]=fb;
        }
    }
    for(int i=1;i<=n;i++)
        if(num[i]%2==1)
            sign=false;

    if(sign==false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}