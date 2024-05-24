#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int ans=0;
bool st[10];
int path[10];

void dfs2()
{
    int a=0;
    for(int i=1;i<=7;i++)
    {
        a=a*10+path[i];
        int b=0;
        for(int j=i+1;j<=8;j++)
        {
            b=b*10+path[j];
            int c=0;
            for(int k=j+1;k<=9;k++)c=c*10+path[k];
            if(b%c==0 && b/c+a==n)ans++;
        }
    }
}

void dfs1(int u)
{
    if(u==10)
    {
        dfs2();
        return;
    }
    for(int i=1;i<=9;i++)
        if(st[i]==false)
        {
            st[i]=true;
            path[u]=i;
            dfs1(u+1);
            path[u]=0;
            st[i]=false;
        }
}

int main()
{
    cin>>n;
    dfs1(1);
    cout<<ans<<endl;

    return 0;
}