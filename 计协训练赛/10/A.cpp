#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    int n = s.size();
    s='0'+s;
    char c; cin>>c;
    for(int i=1;i<=n;i++)
        if(s[i]==c && i%2!=0)
        {
            cout<<"YES"<<endl;
            return;
        }
    cout<<"NO"<<endl;
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