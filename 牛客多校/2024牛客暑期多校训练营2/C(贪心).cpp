#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans=0;
char g[3][1000010];
int cnt[1000010];
int qu[1000010],idx=1;

void solve()
{
    int n; cin>>n;
    cin>>g[1]+1>>g[2]+1;
    for(int j=1;j<=n;j++)
    {
        int num=0;
        for(int i=1;i<=2;i++)
            if(g[i][j]=='R')num++; 
        cnt[j]=num;
        if(j==1)qu[j]=idx++;
        else
        {
            int sign=0;
            for(int i=1;i<=2;i++)
                if(g[i][j]=='R' && g[i][j-1]=='R')
                    qu[j]=qu[j-1],sign=1;
            if(sign==0)qu[j]=idx++;
        }
    }

    for(int l=1;l<=n;l++)
    {
        int r=l;
        while(r+1<=n && qu[r+1]==qu[r])r++;
        int sum=0;
        for(int i=l;i<=r;i++)sum+=cnt[i];
        
        for(int i=l;i<=r;i++)
        {
            if(cnt[i]==2)
            {
                int len=1;
                int j=i;
                while(j+1<=r && cnt[j+1]==2)j++,len++;
                if(i-1>=l && j+1<=r)
                {
                    if(g[1][i-1]==g[1][j+1])
                    {
                        if(len%2==1)sum--;
                    }
                    else
                    {
                        if(len%2==0)sum--;
                    }
                }
                i=j;
            }
        }
        l=r;
        ans=max(ans,sum);
    }
    cout<<max(ans-1,0ll)<<endl;
}

signed main()
{
    solve();
    return 0;
}