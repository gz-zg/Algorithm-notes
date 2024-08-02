#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    map<int,int>mp;
    vector<int>ans1(n+10),ans2(n+10);
    vector<bool>st1(n+10,false),st2(n+10,false);
    for(int i=1;i<=n;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==1)
        ans1[i]=a[i];
        st1[a[i]]=true;
    }
    ans2=ans1;
    st2=st1;
    int v=1;
    for(int i=1;i<=n;i++)
    {
        if(ans1[i]==0)
        {
            while(st1[v]==true)v++;
            ans1[i]=v;
            st1[v]=true;
        }
    }
    for(int i=1;i<=n;i++)cout<<ans1[i]<<" ";
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        if(ans2[i]==0)
        {
            v=ans2[i-1]-1;
            while(st2[v]==true)v--;
            ans2[i]=v;
            st2[v]=true;
        }
    }
    for(int i=1;i<=n;i++)cout<<ans2[i]<<" ";
    cout<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}