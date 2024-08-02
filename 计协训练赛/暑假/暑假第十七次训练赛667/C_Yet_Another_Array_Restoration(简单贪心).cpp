#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,x,y;

void solve()
{
    cin>>n>>x>>y;
    if(x>y)swap(x,y);
    int minc;
    for(int i=50;i>=1;i--)
        if((y-x)%i==0 && (y-x)/i+1<=n)
            minc=i;

    int len=(y-x)/minc+1;
    while(n-len>=1 && x-minc>=1)x-=minc,len++;
    for(int i=1;i<=n;i++)
    {
        cout<<x<<" ";
        x+=minc;
    }
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}