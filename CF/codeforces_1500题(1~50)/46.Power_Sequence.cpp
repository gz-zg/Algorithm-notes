#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[100010];

signed main()
{
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),sum+=a[i];
    
    if(n>=50)cout<<sum-n<<endl;
    else
    {
        int ans=sum-n;
        sort(a+1,a+1+n);
        for(int c=2;c<=1e6;c++)
        {
            int now=0, b=1;
            for(int i=1;i<=n;i++)
            {
                now+=abs(a[i]-b);
                b*=c;
                if(now>=ans)break;
            }
            if(now<ans)ans=now;
        }
        cout<<ans<<endl;
    }

    return 0;
}