#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int a[5010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    bool sign=true;
    for(int i=2;i<=n;i++)
        if(a[i]!=a[1])
            sign=false;
    if(sign)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vector<int>s;
    for(int i=2;i<=n;i++)
        if(a[i]!=a[1])printf("%d %lld\n",1,i);
        else s.push_back(i);
    for(int i=2;i<=n;i++)
        if(a[i]!=a[1])
        {
            for(int j:s)printf("%lld %lld\n",j,i);
            return;
        }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}
