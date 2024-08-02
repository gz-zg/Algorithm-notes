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
        int a,b,c,d; cin>>a>>b>>c>>d;
        int ans=0;
        if(b>a)ans++;
        if(c>a)ans++;
        if(d>a)ans++;
        cout<<ans<<endl;
    }

    return 0;
}