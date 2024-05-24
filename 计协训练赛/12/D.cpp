#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,k; string s; 
    cin>>n>>k>>s;
    
    map<char,int>mp;
    for(char i:s)mp[i]++;
    
    int ou=0,ji=0;
    for(pair<char,int> i:mp)
    {
        ou+=i.second/2;
        ji+=i.second%2;
    }

    int ans = ou/k*2;
    ji+=ou%k*2;
    if(ji>=k)ans++;
    cout<<ans<<endl;
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