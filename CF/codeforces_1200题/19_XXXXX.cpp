#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];

void solve()
{
    int n,x; cin>>n>>x;
    int sum=0;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]),sum+=a[i];

    if(sum%x!=0)cout<<n<<endl;
    else
    {
        int l=1,r=n;
        while(l<=n && a[l]%x==0)l++;
        while(r>=1 && a[r]%x==0)r--;
        if(l==n+1 || r==0)cout<<-1<<endl;
        else cout<<n-min(l,n-r+1)<<endl;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}