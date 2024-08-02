#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int>d(10000010,1);
vector<int>ans(10000010,-1);

signed main()
{
    for(int i=2;i<=10000000;i++)
        for(int j=i;j<=10000000;j+=i)
            d[j]+=i;
    
    for(int i=10000000;i>=1;i--)
        if(d[i]<=10000000)
            ans[d[i]]=i;

    int t; cin>>t;
    while(t--)
    {
        int c; cin>>c;
        cout<<ans[c]<<endl;
    }

    return 0;
}