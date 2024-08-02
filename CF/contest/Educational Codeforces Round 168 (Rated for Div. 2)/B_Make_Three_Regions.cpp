#include <bits/stdc++.h>
#define int long long
#define x first
#define y second
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
char g[3][200010];

void solve()
{
    cin>>n;
    cin>>g[1]+1>>g[2]+1;

    int ans=0;
    for(int i=1;i<=2;i++)
        for(int j=1;j<=n;j++)
        {
            if(g[i][j]=='.')
            {
                if(i==1)
                {
                    if(g[2][j]=='.'&&j-1>=1&&g[i][j-1]=='.'&&j+1<=n&&g[i][j+1]=='.'&&g[2][j-1]=='x'&&g[2][j+1]=='x')
                        ans++;
                }
                if(i==2)
                {
                    if(g[1][j]=='.'&&j-1>=1&&g[i][j-1]=='.'&&j+1<=n&&g[i][j+1]=='.'&&g[1][j-1]=='x'&&g[1][j+1]=='x')
                        ans++;
                }
            }
        }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}