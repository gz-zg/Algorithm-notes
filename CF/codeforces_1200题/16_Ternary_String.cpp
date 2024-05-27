//双指针算法
//显然，若 S 的一个字串 T 满足题意，则所有包含 T 的字符串均满足题意。
//我们不妨从 1 开始，维护两个指针 l,r 每次操作使 r 向右尝试增加，判断新的字串是否满足题意,
//若是，则尝试将 l 右移，尽量缩小字串。
//因为首先是满足题意，其次再缩小长度，所以本题的正确性可以得到保证。
//时间复杂度分析：因为每个点最多分别被 l,r 扫到一次，所以时间复杂度为 Θ(n) 可以通过该题。
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    int ans=2e9;
    int cnt[4]={0};
    for(int j=0,i=0;j<s.size();j++)
    {
        cnt[s[j]-'0']++;
    
        while(cnt[1] && cnt[2] && cnt[3])
        {
            ans=min(ans,j-i+1);
            cnt[s[i]-'0']--;
            i++;
        }
    }

    if(ans==2e9)cout<<0<<endl;
    else cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}