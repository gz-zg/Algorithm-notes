#include <bits/stdc++.h>
#define int long long
using namespace std;

int cul(int x)  //计算的是从0加到x过程中改变的总位数
{               //计算规律为->个位每隔1就变一次，十位每隔10就变一次，...以此类推
    int num=0, k=1;
    for(int i=1;i<=10;i++)num+=x/k, k*=10;
    return num;
}

void solve()
{
    int l,r; cin>>l>>r;
    cout<<cul(r)-cul(l)<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}