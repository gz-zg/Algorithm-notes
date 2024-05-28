#include<bits/stdc++.h>
#define int long long 
using namespace std;

int n,m,k;
int a[520][520];

signed main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%lld",&a[i][j]);

    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            a[j][i]+=a[j-1][i];
    
    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
        {
            //双指针算法
            int l=1,sum=0;
            for(int r=1;r<=m;r++)
            {
                sum+=a[j][r]-a[i-1][r];
                while(sum>k)
                {
                    sum-=a[j][l]-a[i-1][l];
                    l++;
                }
                ans+=r-l+1;
            }
        }
    cout<<ans<<endl;

    return 0;
}