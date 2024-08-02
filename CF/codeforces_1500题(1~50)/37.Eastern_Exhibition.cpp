//货仓选址的二维版本
/*
我们发现这个问题 x 轴和 y 轴可以独立开来考虑，那么问题就变成了一维数轴上的问题：
某点到数轴上一些点距离最短的点有几个，
如果是奇数个点，那就是最中间的那个，
如果是偶数，就是中间两个点以及中间所有点。
x 轴和 y 轴的结果相乘就是答案。
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;

void solve()
{
    cin>>n;
    vector<int>x,y;
    for(int i=1;i<=n;i++)
    {
        int a,b; cin>>a>>b;
        x.push_back(a); y.push_back(b);
    }
    sort(x.begin(),x.end()); sort(y.begin(),y.end());
    int h,w;
    if(x.size()%2==1)w=1;
    else w=x[x.size()/2]-x[x.size()/2-1]+1;
    if(y.size()%2==1)h=1;
    else h=y[y.size()/2]-y[y.size()/2-1]+1;
    cout<<w*h<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}