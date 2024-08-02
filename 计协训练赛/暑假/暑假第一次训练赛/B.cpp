#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[55];

void solve()
{
    int m,s; cin>>m>>s;
    int he=0;
    for(int i=1;i<=m;i++)cin>>a[i],he+=a[i];
    sort(a+1,a+1+m);
    int sum=(1+a[m])*a[m]/2;
    s-=(sum-he);
    if(s<0){cout<<"NO"<<endl;return;}
    else if(s==0){cout<<"YES"<<endl;return;}
    else
    {
        for(int i=a[m]+1;i<=100;i++)
        {
            if(s==0){cout<<"YES"<<endl;return;}
            else s-=i;
        }
        cout<<"NO"<<endl;
    }
    
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}