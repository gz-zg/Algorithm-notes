//结论：最多不超过2次操作
#include <bits/stdc++.h>
using namespace std;

int a[200010];
bool st[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=i)st[i]=false;
        else st[i]=true;
    }
    int num=0;
    for(int i=1;i<=n;i++)
        if(st[i]==false)
        {
            num++;
            int j=i;
            while(j+1<=n && st[j]==false)j++;
            i=j;
        }
    if(num==0)cout<<0<<endl;
    else if(num==1)cout<<1<<endl;
    else if(num>=2)cout<<2<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}