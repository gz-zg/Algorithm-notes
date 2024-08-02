//①二进制能凑出任何数字
//②随着一个十进制的数字增大，其二级制中最高位的位数是非递减的
//所以当使每个数都倾向于成长到前面的最大数时，有两个好处：
//1.对后面最优，因为是满足条件的最小数字
//2.耗费的秒数最小。因为是满足条件的最小数字，所以要增加的数字最小，需要的秒数也最小

#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);

    vector<int>g;
    if(n==1)cout<<0<<endl;
    else
    {
        for(int i=2;i<=n;i++)
            if(a[i]>=a[i-1])continue;
            else g.push_back(a[i-1]-a[i]),a[i]=a[i-1];
    
        if(g.size()==0)cout<<0<<endl;
        else
        {
            sort(g.begin(),g.end());
            int v=g[g.size()-1];
            int ans=0;
            while(v)
            {
                v>>=1;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}