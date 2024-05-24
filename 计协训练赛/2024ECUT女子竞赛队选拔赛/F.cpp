#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 400010;

int n,k;
int a[N];

bool check(int x)
{
    sort(a+1,a+1+k);
    LL step=0;
    for(int i=k;i>k-x;i--)step+=n-a[i];
    if(step<n)return true;
    else return false;
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++)scanf("%d", &a[i]);
    //这里二分的是《能保护的老鼠的最大数量》
    int l=0,r=k;
    while(l<r)
    {
        int m=(l+r+1)/2;
        if(check(m))l=m;
        else r=m-1;
    }
    cout<<l<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();

    return 0;
}