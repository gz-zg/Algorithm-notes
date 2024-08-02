#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
string s; 
int ans;

void dfs(int l,int r,char c,int num)
{
    if(l==r)  //表示已经来到了某一个终点
    {
        if(s[l]==c)
        {
            if(num<ans)ans=num;
        }
        else
        {
            if(num+1<ans)ans=num+1;
        }
        return;
    }

    int mid=(l+r)/2;
    int n1=0,n2=0;
    for(int i=l;i<=mid;i++)
        if(s[i]!=c)n1++;
    for(int i=mid+1;i<=r;i++)
        if(s[i]!=c)n2++;
    dfs(l,mid,c+1,num+n2);
    dfs(mid+1,r,c+1,num+n1);
}

void solve()
{
    cin>>n;
    cin>>s; s='@'+s;
    ans=2e9;
    dfs(1,n,'a',0);  
    cout<<ans<<endl; 
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}