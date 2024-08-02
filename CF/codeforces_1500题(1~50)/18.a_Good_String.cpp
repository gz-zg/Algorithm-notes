#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int ans;
int n; string s; 

void dfs(int l, int r, char x, int num)
{
    if(l==r)  //当l==r时，表示已经搜到底了
    {
        int t=0;
        if(s[l]!=x)t++;
        if(num+t<ans)ans=num+t;
        return;
    }

    int mid=(l+r)/2;
    int n1=0,n2=0;
    for(int i=l;i<=mid;i++)
        if(s[i]==x)
            n1++;
    for(int i=mid+1;i<=r;i++)
        if(s[i]==x)
            n2++;
    dfs(l,mid,x+1,num+(r-(mid+1)+1)-n2);
    dfs(mid+1,r,x+1,num+(mid-l+1-n1));
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