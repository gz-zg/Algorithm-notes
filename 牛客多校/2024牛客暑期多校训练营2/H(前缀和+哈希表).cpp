#include <bits/stdc++.h>
#define int long long
#define x first
#define y second
using namespace std;

int n,a,b;
string s; 

void solve()
{   
    cin>>n>>a>>b;
    cin>>s; s='@'+s;

    if(a==0 && b==0)
    {
        cout<<(1+n)*n/2<<endl;
        return;
    }

    vector<pair<int,int>>q(n+10);
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='W')q[i]={q[i-1].x,q[i-1].y+1};
        else if(s[i]=='S')q[i]={q[i-1].x,q[i-1].y-1};
        else if(s[i]=='A')q[i]={q[i-1].x-1,q[i-1].y};
        else if(s[i]=='D')q[i]={q[i-1].x+1,q[i-1].y};
    }
   
   int ans=0;
   map<pair<int,int>,int>res;
   for(int i=n;i>=1;i--)
   {
        res[q[i]]=i;
        int t = res[{q[i-1].x+a,q[i-1].y+b}]; 
        if(t!=0)ans+=n-t+1;
   }
   cout<<ans<<endl;
}

signed main()
{
    solve();
    return 0;
}