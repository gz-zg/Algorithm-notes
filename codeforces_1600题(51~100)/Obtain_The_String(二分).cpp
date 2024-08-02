/* 
O(nlog(n))
我们可以把s串中每一种字母出现的位置进行记录,
当需要该字母的时候看看该字母有没有符合要求的位置, 
如果有则选取符合要求的最小下标. 
反之则开始新的一次选取. 如果需要选取s中没有的字符, 则输出-1.
在找查下标时, 由于数据量比较大, 需要采用二分找查.
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

string s,t;

void solve()
{
    cin>>s>>t;
    int ns=s.size(),nt=t.size();
    vector<int>g[26];
    
    for(int i=0;i<ns;i++)g[s[i]-'a'].push_back(i);
    int ans=1,k=-1;
    for(int i=0;i<nt;i++)
    {
        int x=t[i]-'a';
        if(g[x].size()==0){cout<<-1<<endl;return;}
        else
        {
            auto it = upper_bound(g[x].begin(),g[x].end(),k);
            if(it==g[x].end())
            {
                ans++;
                k=-1;
                i--;//当前这个字符再找一次
            }
            else k=*it;
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}