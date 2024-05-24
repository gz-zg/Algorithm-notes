#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
string s; 
string a[1010];
int path[9];
bool st[8];
unordered_map<string,int>mp;
unordered_map<string,bool>use,blank;
int ans=0;

void add(string str)
{
        string t;
        for(int j=1;j<=8;j++)t+=str[path[j]];
        if(use[t]==false)ans+=mp[t],use[t]=true;
}

void dfs(int u,string str)
{
    if(u==9)
    {
        add(str);
        return;
    }
    for(int i=0;i<=7;i++)
        if(st[i]==false)
        {
            st[i]=true;
            path[u]=i;
            dfs(u+1,str);
            path[u]=0;
            st[i]=false;
        }
}

signed main()
{
    cin>>s;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=0;i<=s.size()-8;i++)mp[s.substr(i,8)]++;
    for(int i=1;i<=n;i++)dfs(1,a[i]),use=blank;
    cout<<ans<<endl;

    return 0;
}