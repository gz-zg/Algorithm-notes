#include <bits/stdc++.h>
using namespace std;

int a[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);

    int num=-2e9, l=2e9, r=2e9;
    for(int i=1;i<=n;i++)
        if(a[i]!=0)  //哎呦，要考虑有连续个零的情况！！！！！
        {
            int j=i;
            while(j+1<=n && a[j+1]!=0)j++;
            int fu=0,n2=0;
            for(int k=i;k<=j;k++)
            {
                if(a[k]<0)fu++;
                if(a[k]==2 || a[k]==-2)n2++;
            }

            if(fu%2==0){
                if(n2>num && i<=j)num=n2,l=i,r=j;
            }
            else
            {
                int n2_b=n2;
                for(int k=i;k<=j;k++)
                {
                    if(a[k]==2 || a[k]==-2)n2--;
                    if(a[k]<0)
                    {
                        if(k+1<=j && n2>num)num=n2,l=k+1,r=j;
                        break;
                    }
                }
                n2=n2_b;
                for(int k=j;k>=i;k--)
                {
                    if(a[k]==2 || a[k]==-2)n2--;
                    if(a[k]<0)
                    {
                        if(i<=k-1 && n2>num)num=n2,l=i,r=k-1;
                        break;
                    }
                }
            }
            i=j+1;
        }
    if(l!=2e9 && r!=2e9)cout<<l-1<<" "<<n-r<<endl;
    else cout<<n<<" "<<0<<endl;
}   

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}