/*
本质上是求 <数组a1,a2,a3...an> 与 <变量x> 
的 <绝对差值> 的最大值最小是多少？而这个值只与数组中的minv和maxv有关
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[100010];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    
    int m=0;
    for(int i=1;i<=n-1;i++)
        if(a[i]!=-1 && a[i+1]!=-1)
            m=max(m,abs(a[i+1]-a[i]));

    vector<int>res;
    for(int i=1;i<=n;i++)
        if(a[i]==-1)
        {
            if(i-1>=1 && a[i-1]!=-1)res.push_back(a[i-1]);
            if(i+1<=n && a[i+1]!=-1)res.push_back(a[i+1]);
        }

    if(res.size()==0)cout<<0<<" "<<0<<endl;
    else
    {
        sort(res.begin(),res.end());
        m=max(m,(res.back()-res.front()+1)/2);
        cout<<m<<" "<<(res.back()-res.front()+1)/2+res.front()<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}