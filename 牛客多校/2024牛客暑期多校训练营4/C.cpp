#include <bits/stdc++.h>
#define int long long
using namespace std;

int n; 
int a[1000010];
int len;
vector<bool>vis;

void dfs(int v,int st)
{
    vis[v]=true;
    len++;
    if(a[v]!=st)dfs(a[v],st);
    else return;
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    
    vector<int>res(n+10);
    vis=vector<bool>(n+10,false);

    for(int i=1;i<=n;i++)
    {
        if(a[i]==i)vis[i]=true;
        else
        {
            if(vis[i]==false)
            {
                vis[i]=true;
                len=1;
                dfs(a[i],i);
                res[len]++;
            }   
        }
    }
    
    int c=0;
    int ans=0;
    for(int i=2;i<=n;i++)
        if(i==2)
        {
            ans+=res[i]/2;
            if(res[i]%2==1)c++;
        }
        else if(i==3 || i==4)ans+=res[i];
        else
        {
            if((i-1)%3==0)ans+=(i-1)/3*res[i];
            else if(i%3==2)ans+=i/3*res[i],c+=res[i];
            else if(i%3==0)ans+=i/3*res[i];
        }
    ans+=(c+1)/2;
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}