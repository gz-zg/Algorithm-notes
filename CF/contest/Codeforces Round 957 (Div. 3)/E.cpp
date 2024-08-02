//枚举a的所有可能取值，对于每个a最多只需要枚举6个b就足够了
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n; cin>>n;
    string sn=to_string(n);
    int len=sn.size();

    vector<pair<int,int>>res;
    for(int a=1;a<=10000;a++)
    {   
        int minb=max(len*a-6,1LL), maxb=min(len*a-1,min(10000LL,a*n));
        for(int b=minb;b<=maxb;b++)
        {
            int x=n*a-b;
            int y=0;
            for(int i=0;i<len*a-b;i++)y=y*10+(sn[i%len]-'0');
            if(x==y)res.push_back({a,b});
        }
    }  
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i.first<<" "<<i.second<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}