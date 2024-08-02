#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

struct K
{
    string name;
    int num;
    int t;
}a[100010],b[100010];

bool cmp(K x, K y)
{
    if(x.num>y.num)return true;
    if(x.num==y.num && x.t<y.t)return true;
    return false;
}

signed main()
{
    map<string,int>mp;
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        string name; cin>>name;
        int num, t; scanf("%lld %lld",&num,&t);
        a[i]={name,num,t};
        mp[name]++;
    }
    int m; cin>>m;
    for(int i=1;i<=m;i++)
    {
        string name; cin>>name;
        int num, t; scanf("%lld %lld",&num,&t);
        b[i]={name,num,t};
        mp[name]++;
    }

    sort(a+1,a+1+n,cmp);
    int ans1=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i].name=="lzr010506")
        {
            ans1=i-ans1;
            break;
        }
        if(mp[a[i].name]==2)ans1++;
    }

    sort(b+1,b+1+n,cmp);
    int ans2=0;
    for(int i=1;i<=m;i++)
    {
        if(b[i].name=="lzr010506")
        {
            ans2=i-ans2;
            break;
        }
        if(mp[b[i].name]==2)ans2++;
    }

    cout<<min(ans1,ans2)<<endl;

    return 0;
}