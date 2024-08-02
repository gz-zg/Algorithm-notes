#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

string a="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

void solve()
{
    string s; cin>>s;
    if(a.find(s)==-1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}