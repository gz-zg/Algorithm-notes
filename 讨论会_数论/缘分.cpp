#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        LL n; cin>>n;
        if(n==1)cout<<1<<endl;
        else cout<<n*(n-1)<<endl;
    }

    return 0;
}