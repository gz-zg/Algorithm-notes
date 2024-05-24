#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[20];

bool dfs(int u,int v)
{
    if(u==n+1)
        if(v==0)return true;
        else return false;

    if(dfs(u+1,(v+a[u])%360))return true;
    if(dfs(u+1,((v-a[u])+360)%360))return true;

    return false;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];

    if(dfs(1,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}