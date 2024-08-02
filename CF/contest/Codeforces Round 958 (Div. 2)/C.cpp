#include <bits/stdc++.h>
#define int long long
using namespace std;

int zhi[100];

void solve()
{
    int n; cin>>n;
    int nn=n;
    vector<int>w;
    while(n)
    {
        w.push_back(n&1);
        n>>=1;
    }
    int n1=0;
    for(int i:w)
        if(i==1)
            n1++;
    if(n1==1)
    {
        cout<<1<<endl;
        cout<<nn<<endl;
    }
    else
    {
        vector<int>ans;
        for(int i=0;i<w.size();i++)
            if(w[i]==1)
                ans.push_back(zhi[i]);
        vector<int>res;
        res.push_back(nn);
        for(int i=0;i<ans.size();i++)
            res.push_back(nn-ans[i]);
        sort(res.begin(),res.end());
        cout<<res.size()<<endl;
        for(int i:res)cout<<i<<" ";
        cout<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    zhi[0]=1;
    for(int i=1;i<=62;i++)zhi[i]=zhi[i-1]*2;
    while(t--)solve();
    return 0;
}