#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N],nex[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    int st=1,ed=1;
    while(st<=n)
    {
        if(a[st]!=a[ed])
        {
            for(int i=st;i<=ed-1;i++)nex[i]=ed;
            st=ed;
        }
        else ed++;
    }
    int q; cin>>q;
    while(q--)
    {
        int a,b; scanf("%d%d",&a,&b);
        if(nex[a]<=b)cout<<a<<" "<<nex[a]<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }

}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}