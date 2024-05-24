#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k;
int a[25];
int path[25]; int front[25];

int ans=0;

bool is_preme(int x)
{
    if(x<=1)return false;
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0)return false;
    }
    return true;
}

void dfs(int pos)
{
    if(pos==k+1)
    {
        int sum=0;
        for(int i=1;i<=k;i++)sum+=path[i];
        if(is_preme(sum))ans++;
        return;
    }

    for(int i=front[pos-1]+1;i<=n;i++)
    {
        path[pos]=a[i];
        front[pos]=i;
        dfs(pos+1);
        path[pos]=0;
        front[pos]=0;
    }
}

int main()
{
    cin>>n>>k;
    for (int i = 1; i <= n; i++)cin>>a[i];

    dfs(1);

    cout<<ans;

    return 0;
}