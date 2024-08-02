#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a,b,c; cin>>a>>b>>c;
    int cha = (3-b%3);
    if(cha==3)cha=0;
    if(b%3!=0 && 3-(b%3)>c)cout<<-1<<endl;
    else cout<<a+(b+2)/3+(c-cha+2)/3<<endl;
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