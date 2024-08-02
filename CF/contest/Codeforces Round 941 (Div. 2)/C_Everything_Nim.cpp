#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int t;scanf("%d",&t);
        mp[t]++;
    }

    if(mp.begin()->first>=2)cout<<"Alice"<<endl;  //如果最小的值>=2，则先手必胜
    else
    {
        int num=0;  //num表示的是到达《最小牌堆大小至少为2的状态》之前因为开头的[1,2,...,x]使得先手转换的次数
        for(auto i:mp)
            if(i.first==num+1)
                num++;

        if(num==mp.size())
        {
            if(num%2==0)cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
        else
        {
            if(num%2==1)cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}