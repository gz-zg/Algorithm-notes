#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;
//贪心，当mp[s[i]]==2时说明找到了最先成对的一组字符
//然后将统计的其他字符全部删掉（即map清空），并再次开始统计
void solve()  
{
    string s; cin>>s;
    int n = s.size();
    s='0'+s;
    map<char,int>mp,backup;
    int cnt=0; int ans=0;
    for(int i=1;i<=n;i++)
    {
        mp[s[i]]++;
        cnt++;
        if(mp[s[i]]==2)
        {
            mp=backup;
            ans+=cnt-2;
            cnt=0;
        }
    }
    ans+=cnt;
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