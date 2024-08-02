#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[110];

void solve()
{
    int n,k; cin>>n>>k;
    memset(a,0,sizeof a);
    for(int i=1;i<=n;i++)
    {
        int t;scanf("%d",&t);
        a[t]++;
    }
    for(int i=1;i<=100;i++)
        if(a[i]>=k)
        {
            cout<<k-1<<endl;
            return;
        }
    cout<<n<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}