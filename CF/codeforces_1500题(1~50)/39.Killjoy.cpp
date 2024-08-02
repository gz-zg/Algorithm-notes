#include <bits/stdc++.h>
using namespace std;

int n,x;
int a[1010];

void solve()
{
    cin>>n>>x;
    int sum=0;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]),sum+=a[i];
    bool sign1=true, sign2=false;  //如果全部等于x则sign1为true
    for(int i=1;i<=n;i++)          //如果存在一个等于x则sign2为true
        if(a[i]!=x)sign1=false;
        else sign2=true;
    if(sign1==true)cout<<0<<endl;
    else
    {
        if(sign2==true)cout<<1<<endl;
        else
        {
            if(n*x==sum)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}