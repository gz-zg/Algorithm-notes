#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
int a[200010];
int b[200010][5];

struct node
{
    int ed;
    int ji;
    int suan;
    //重载运算符时① operator< 必须连在一起 ， ② 两个const必须加上
    // bool operator<(const node& x)const
    // {
    //     return ed > x.ed;
    // }
    bool operator<(const node& x) const 
    {
        return ed > x.ed;
    }
};

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=m;i++)scanf("%lld %lld %lld %lld",&b[i][1],&b[i][2],&b[i][3],&b[i][4]);

    priority_queue<node>dui;

    for(int i=1;i<=m;i++)
    {
        while(dui.size() && dui.top().ed<=b[i][1])
        {
            auto t = dui.top();
            dui.pop();
            a[t.ji]+=t.suan;
        }
        
        int _ji=b[i][2];
        if(b[i][4]>a[_ji])printf("-1\n");
        else a[_ji]-=b[i][4],printf("%lld\n",a[_ji]),dui.push({b[i][1]+b[i][3],_ji,b[i][4]});
    }

    return 0;
}