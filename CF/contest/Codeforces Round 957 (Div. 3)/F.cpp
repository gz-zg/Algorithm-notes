#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100010;

int a[N];

void solve()
{
    int n,x; cin>>n>>x;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    
    int ans=1;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++)
        if(x%a[i]==0)
        {
            if(mp[x/a[i]]!=0)
            {
                ans++;
                mp.clear();
                mp[a[i]]++;
            }
            else
            {//遍历集合进行相乘时不能将所得结果加入集合中导致再次相乘,会发生耦合
                vector<int>res;
                for(auto j:mp)
                    if(j.second!=0 && j.first*a[i]<=x)
                        res.push_back(j.first*a[i]);
                for(int j:res)mp[j]++;
                mp[a[i]]++;
            }
        }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}