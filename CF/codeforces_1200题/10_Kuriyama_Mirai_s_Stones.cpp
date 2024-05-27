//就一个简单的《前缀和》罢了
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL a[N],b[N];

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),b[i]=a[i];

    sort(b+1,b+1+n);

    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }

    int m; cin>>m;
    while(m--)
    {
        int op,l,r; scanf("%d%d%d",&op,&l,&r);
        if(op==1)printf("%lld\n",a[r]-a[l-1]);
        else printf("%lld\n",b[r]-b[l-1]);
    }

    return 0;
}