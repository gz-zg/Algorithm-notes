#include <bits/stdc++.h>
using namespace std;

int n,m;

void solve()
{
    cin>>n>>m;
    string a; cin>>a;
    int l=1,r=1,s=1,x=1;
    int zx=1,zy=1;
    for(int i=0;i<a.size();i++)
    {
        int ll=l,ss=s;
        if(a[i]=='L')zy--,l=min(l,zy);
        else if(a[i]=='R')zy++,r=max(r,zy);
        else if(a[i]=='U')zx--,s=min(s,zx);
        else if(a[i]=='D')zx++,x=max(x,zx);
        //check
        if(r-l+1>m || x-s+1>n)
        {
            cout<<1+(1-ss)<<" "<<1+(1-ll)<<endl;
            return;
        }
    }
    cout<<1+(1-s)<<" "<<1+(1-l)<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}