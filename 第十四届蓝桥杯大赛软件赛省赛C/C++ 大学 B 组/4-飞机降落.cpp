#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n; 
int T[15],D[15],L[15];
bool st[15];

bool dfs(int pos,int last)
{
    if(pos==n+1)return true;

    for(int i=1;i<=n;i++)
        if(st[i]==false && T[i]+D[i]>=last)
        {
            st[i]=true;
            if(dfs(pos+1,max(T[i],last)+L[i]))return true;
            st[i]=false;
        }
        
    return false;
}

void solve()
{
    memset(st,false,sizeof st);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>T[i]>>D[i]>>L[i];
    if(dfs(1,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}