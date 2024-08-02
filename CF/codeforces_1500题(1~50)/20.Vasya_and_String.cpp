//①因为以任何一个点作为起点时，
//其终点越往右，所需要的操作次数（当前区间内a与b的数量的min）越多（二分所需要的单调性）
//②因为答案一定是以某个点作为起点的能扩展的最长区间
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k; 
string s;
int a[100010],b[100010];

bool check(int st, int mid)
{
    int na=a[mid]-a[st-1];
    int nb=b[mid]-b[st-1];
    if(min(na,nb)<=k)return true;
    else return false;
}

signed main()
{
    cin>>n>>k;
    cin>>s; s='@'+s;

    for(int i=1;i<=n;i++)
        if(s[i]=='a')a[i]=a[i-1]+1,b[i]=b[i-1];
        else b[i]=b[i-1]+1,a[i]=a[i-1];

    int ans=-2e9;
    for(int i=1;i<=n;i++)
    {
        int l=i,r=n;
        while(l<r)
        {
            int mid=(l+r+1)/2;
            if(check(i,mid))l=mid;
            else r=mid-1;
        }
        ans=max(ans,l-i+1);
    }
    cout<<ans<<endl;

    return 0;
}