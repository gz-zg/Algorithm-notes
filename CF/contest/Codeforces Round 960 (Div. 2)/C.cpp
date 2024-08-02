#include <bits/stdc++.h>
#define int long long
using namespace std;

int n; 
int a[200010];

void doit()
{
    vector<bool>st(n+10,false);
    vector<int>tmp(n+10,0);
    int maxv=0;
    for(int i=1;i<=n;i++)
    {
        if(i-1>=1 && st[a[i]]==true && a[i]>maxv)maxv=a[i];
        tmp[i]=maxv;
        st[a[i]]=true;
    }
    for(int i=1;i<=n;i++)a[i]=tmp[i];
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);

    int sum=0;
    for(int i=1;i<=n;i++)sum+=a[i];
    doit();
    for(int i=1;i<=n;i++)sum+=a[i];
    doit();
    int he=0;
    for(int i=1;i<=n;i++)he+=a[i];
    for(int i=n;i>=1;i--)
    {
        sum+=he;
        he-=a[i];
    }
    cout<<sum<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}