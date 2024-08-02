#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;
vector<int>g[45];
int ans=-1e18;
int st=0;
void dfs(int u,int pre,int len)
{
    if(len>ans)ans=len;
    
    int backup=st;
    st|=(1LL<<u);//1是int类型,只有32位,不够用,要用1LL
    for(int i:g[pre])st|=(1LL<<i);
    
    for(int i:g[u])
        if((st>>i&1LL)==0)
            dfs(i,u,len+1);
    st=backup; 
}

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b; scanf("%lld %lld",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=1;i<=n;i++)dfs(i,0,1);
    cout<<ans<<endl;

    return 0;
}

//解法2-787ms
//dfs中最好不要进行<数组的拷贝>和<数组赋值修改>操作
/*
例如下面这样会超时：
vector<bool>backup=st;
st[u]=true;
for(int i:g[pre])st[i]=true;
st=backup;

应该改成这样：
st[u]++;
for(int i:g[pre])st[i]++;
for(int i:g[pre])st[i]--;
st[u]--;
*/

/*
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;
vector<int>g[45];
int ans=-1e18;
vector<int>st(45,0);

void dfs(int u,int pre,int len)
{
    if(len>ans)ans=len;

    st[u]++;
	for(int i:g[pre])st[i]++;

    for(int i:g[u])
    	if(st[i]==0)
        	dfs(i,u,len+1);

	for(int i:g[pre])st[i]--;
	st[u]--;
}

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=1;i<=n;i++)dfs(i,0,1);
    cout<<ans<<endl;

    return 0;
}
*/