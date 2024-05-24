//模拟+贪心（因为插入的次数已经固定了）
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL a[110],b[110];

void solve()
{
    int n; cin>>n;   
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=b[i])continue;
        else
        {
            ans++;
            for(int j=n-1;j>=i;j--)a[j+1]=a[j];
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}