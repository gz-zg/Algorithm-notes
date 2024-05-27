//这道题因为《给的是n个不同的整数》，因此可以再开一个数组让<val>映射到<下标>
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];
int b[2*N];

void solve()
{
    int n; cin>>n;
    //注意这里的b数组一定要记得每次都要将可能要用到的位置(1~2*n)初始化为0
    //因为可能会访问到b数组中之前存储的值
    //并且只能初始化 1~2*n ,因为t=10000，如果将b数组全部初始化的话，包超时的
    for(int i=1;i<=2*n;i++)b[i]=0;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),b[a[i]]=i;

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j*a[i]<=2*n;j++)
            if(1<=b[j] && b[j]<i)
                if(j*a[i]==i+b[j])
                    ans++;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}