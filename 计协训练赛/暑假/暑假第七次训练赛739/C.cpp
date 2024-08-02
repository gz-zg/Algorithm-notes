#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int k; cin>>k;
    for(int i=1;i<=100000;i++)
    {
        if(i*i==k)
        {
            cout<<i<<" "<<1<<endl;
            return;
        }
        if(i*i>k)       
        {   
            int c =k-(i-1)*(i-1);
            if(c<=i)cout<<c<<" "<<i<<endl;
            else cout<<i<<" "<<i-(c-i)<<endl;
            return;
        }
    }   
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}