#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a,b;

void solve()
{
    cin>>n>>m>>a>>b;
    if((n*m)%2!=0)
    {
        cout<<"No"<<endl;
        return;
    }
    if(n*m==2)
    {
        cout<<"Yes"<<endl;
        return;
    }

    if(a==0 && b==0)
    {
        if(n*m==2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else if(a==0 && b==1)
    {
        if((n==1&&m>2)||(n>2&&m==1))cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    else if(a==1 && b==0)
    {
        if((n==1&&m%2==0)||(n%2==0&&m==1))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else if(a==1 && b==1)cout<<"Yes"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}