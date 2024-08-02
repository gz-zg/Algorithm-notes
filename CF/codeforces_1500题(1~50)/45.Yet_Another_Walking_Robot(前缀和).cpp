//对于关于连续子区间的问题，一般会使用到前缀和
//这题的做法是对向量求前缀和，题目要求的东西就转换成了求S[r]-S[l-1]==0的最短区间
//因此只需要用map维护前面出现的所有前缀和的最后出现的位置
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
string s;

void solve()
{
    cin>>n;
    cin>>s; s='@'+s;
    vector<pair<int,int>>q(n+10);
    for(int i=1;i<=n;i++)
    {
        int x=q[i-1].first, y=q[i-1].second;
        if(s[i]=='L')q[i]={x-1,y};
        else if(s[i]=='R')q[i]={x+1,y};
        else if(s[i]=='U')q[i]={x,y+1};
        else if(s[i]=='D')q[i]={x,y-1};
    }
    int l, r, minc=1e18;
    map<pair<int,int>,int>mp; mp[{0,0}]=0;
    for(int i=1;i<=n;i++)
    {
        if(mp.count(q[i])==1)
            if(i-mp[q[i]]<minc)
            {
                minc=i-mp[q[i]];
                l=mp[q[i]]+1;
                r=i;
            }
        mp[q[i]]=i;
    }
    if(minc==1e18)cout<<-1<<endl;
    else cout<<l<<" "<<r<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}