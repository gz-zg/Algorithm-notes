//整数二分的要求：只要ans在一开始选定的二分的范围里面，即ans在[l,r]里面，然后可以找到一个二段性使得ans作为二段性的分界点就行了
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    LL n,k; cin>>n>>k;
    
    LL l=1, r=4e9;
    while(l<r)  //这里二分的是个数
    {
        LL m = (l+r)/2;
        if( (m/n)*(n-1)+m%n>=k )r=m;
        else l=m+1;
    }
    cout<<l<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}