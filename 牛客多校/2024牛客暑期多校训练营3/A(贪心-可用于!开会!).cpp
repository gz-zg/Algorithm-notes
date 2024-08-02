#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,l,r;
int a[500010];

signed main()
{
    cin>>n>>l>>r;
    if(r==n)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    int cnt=0;
    int k=((n-r)+(r-l-1))/(r-l);
    for(int i=1;i<=n;i++)
        if(a[i]>=3)
            cnt+=min(k,(a[i]+1)/2-1);

    if(cnt>=k*l)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}