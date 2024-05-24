#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 

int N[110];
int M[110];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,k; cin>>n>>m>>k;
        for(int i=1;i<=n;i++)cin>>N[i];
        for(int i=1;i<=m;i++)cin>>M[i];
        
        LL ans=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(N[i]+M[j]<=k)
                    ans++;

        cout<<ans<<endl;
    }

    return 0;
}