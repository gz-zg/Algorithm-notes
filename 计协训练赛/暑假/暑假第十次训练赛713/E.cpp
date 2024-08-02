#include <bits/stdc++.h>
using namespace std;

int n,l,r,s;

void solve()
{
    cin>>n>>l>>r>>s;
    vector<int>ans(n+10,0);
    for(int i=l;i<=r;i++)ans[i]=i-l+1;
    int st=(r-l+1)*(1+r-l+1)/2;
    if(st>s)cout<<-1<<endl;
    else
    {
        int c=s-st;
        while(1)
        {
            for(int i=r;i>=l;i--)
            {
                if(c==0)
                {
                    vector<bool>vis(n+10,false);
                    for(int j=l;j<=r;j++)vis[ans[j]]=true;
                    for(int j=1,k=1;j<=n;j++)
                        if(j>=l && j<=r)continue;
                        else
                        {
                            while(vis[k])k++;
                            ans[j]=k;
                            vis[k]=true;
                        }
                    for(int j=1;j<=n;j++)cout<<ans[j]<<" ";
                    cout<<endl;
                    return;
                }
                ans[i]++; c--;
                if(ans[i]>n)
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}