#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

string s;
int n;
string a[1010];
unordered_map<string,int>mp;
int ans=0;

signed main()
{
    cin>>s;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=0;i<=s.size()-8;i++)
    {
        string t = s.substr(i,8);
        sort(t.begin(),t.end());
        mp[t]++;
    }
    for(int i=1;i<=n;i++)
    {
        sort(a[i].begin(),a[i].end());
        ans+=mp[a[i]];
    }
    cout<<ans<<endl;

    return 0;
}