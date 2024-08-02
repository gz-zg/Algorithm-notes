#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[200010];

void solve()
{
    cin>>n;
    int sum=0;
    for(int i=1;i<=n+2;i++)scanf("%lld",&a[i]),sum+=a[i];

    sort(a+1,a+1+n+2);
    for(int i=1;i<=n+2;i++)
    {
        if(i<=n+1)
        {
            if((sum-a[i])%a[n+2]==0 && (sum-a[i])/a[n+2]==2)
            {
                for(int j=1;j<=n+2;j++)
                    if(j!=i && j!=n+2)
                        cout<<a[j]<<" ";
                cout<<endl;
                return;
            }
        }
        else
        {
            if((sum-a[i])%a[n+1]==0 && (sum-a[i])/a[n+1]==2)
            {
                for(int j=1;j<=n+2;j++)
                    if(j!=i && j!=n+1)
                        cout<<a[j]<<" ";
                cout<<endl;
                return;
            }
        } 
    }
    cout<<-1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}