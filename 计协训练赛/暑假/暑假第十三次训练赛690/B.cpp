#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
string s;

void solve()
{
    cin>>n>>s;
    if(s.substr(0,4)=="2020" || s.substr(n-4,4)=="2020" || (s[0]=='2'&&s.substr(n-3,3)=="020") || (s.substr(0,2)=="20"&&s.substr(n-2,2)=="20") || (s.substr(0,3)=="202"&&s.substr(n-1,1)=="0"))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}