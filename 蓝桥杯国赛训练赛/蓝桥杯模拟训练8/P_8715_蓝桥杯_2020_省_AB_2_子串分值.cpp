//发现了一种比map更好的记录每种元素最后出现的位置的方式->直接普通数组
#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[200];
int pre[100010],nex[100010];

signed main()
{
    string s; cin>>s;
    int n=s.size();
    
    memset(a,-1,sizeof a);
    for(int i=0;i<n;i++)
    {
        pre[i]=a[s[i]];
        a[s[i]]=i;
    }

    fill(a,a+200,n);
    for(int i=n-1;i>=0;i--)
    {
        nex[i]=a[s[i]];
        a[s[i]]=i;
    }

    int ans=0;
    for(int i=0;i<n;i++)ans+=(i-pre[i])*(nex[i]-i);
    cout<<ans<<endl;

    return 0;
}