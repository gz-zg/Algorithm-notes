#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int k; cin>>k;
    int idx=0;
    for(int i=1;i<=100000;i++)
    {
        if(i%3!=0 && i%10!=3)idx++;
        if(idx==k)
        {
            cout<<i<<endl;
            break;
        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}