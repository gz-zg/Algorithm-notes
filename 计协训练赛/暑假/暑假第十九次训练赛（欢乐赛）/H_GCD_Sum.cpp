#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;

void solve()
{   
    cin>>n;
    for(int i=n;;i++)
    {
        int j=i;
        int sum=0;
        while(j)
        {
            sum+=j%10;
            j/=10;
        }
        if(__gcd(i,sum)>1)
        {
            cout<<i<<endl;
            return;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}