#include<bits/stdc++.h>
using namespace std;
const int N=1000010;

int n;
int d[N],fa[N],dep[N];

int find(int x)
{
	if(x==fa[x])return x;
	else
	{
		int f=find(fa[x]);
		dep[x]+=dep[fa[x]]; fa[x]=f;
		return f;
	}
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)d[i]=dep[i]=0,fa[i]=i;
    for(int i=1;i<=n-1;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int f=find(a);
        d[f]=max(d[f], dep[a]+d[b]+1);
        fa[b]=f; dep[b]=dep[a]+1;
        printf("%d ",d[c]); 
    }
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}