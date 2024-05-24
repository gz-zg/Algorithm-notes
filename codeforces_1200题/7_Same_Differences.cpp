//对公式进行等价变形就行了->aj−ai=j−i 等价于 aj-j=ai-i

//如果[键]是[数字]的话->使用[哈希表]很有可能会发生[哈希冲突],最好用map(稳定的O(logn))
//不要用unordered_map(不稳定->O(1)~O(n)->可能会TLE)                  
//如果[键]是[字符串]的话->使用[哈希表]几乎不会发生[哈希冲突],最好用unordered_map(稳定的O(1))
//总结:[字符串]->[unordered_map],[数字]->[map]
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    
    LL ans=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        ans+=mp[a[i]-i];
        mp[a[i]-i]++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}