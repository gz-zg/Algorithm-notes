#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    int a=(s[0]-'a')*25;
    if(s[1]>s[0])cout<<a+s[1]-96-1<<endl;
    else cout<<a+s[1]-96<<endl;
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