#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;

void solve()
{
    cin>>n;
    set<int>mt;
    vector<int>res;
    for(int i=1;i<=n;i++)
    {
        int x; scanf("%lld",&x);
        mt.insert(x);
        res.push_back(x);
    }

    if(n==1)
    {
        cout<<1<<endl;
        cout<<res[0]<<endl;
        return;
    }

    for(int i=1;i<=n-1;i++)
        if((res[i]-res[i-1])%2==1)
        {
            cout<<-1<<endl;
            return;
        }

    bool sign=false;
    vector<int>ans;
    int ci=39;//要在39次之内使mt.size()==1
    while(ci--)
    {
        int minv=*mt.begin();
        int maxv=*mt.rbegin();
        int k=(minv+maxv)/2;
        ans.push_back(k);
        set<int>tmp;
        for(int i:mt)tmp.insert(abs(i-k));
        mt=tmp;
        if(mt.size()==1)
        {
            ans.push_back(*mt.begin());
            sign=true;
            break;
        }
    }
    if(sign)
    {
        cout<<ans.size()<<endl;
        for(int i:ans)printf("%lld ",i);
        cout<<endl;
    }
    else cout<<-1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}