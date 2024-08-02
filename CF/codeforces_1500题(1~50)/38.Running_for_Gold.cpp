/*
暴力：用n^2的想法把每一个选手都比较一遍，根据数据规模会tle;
一个选手比其他所有人都赢，那么在暴力轮回赛制中一次都不能输，
那么如果某个选手跟其他人比输了一次的话，那么他就绝对不是winner，
那么可以遍历一遍找到遍历一遍之后的虚拟最大者，相当于冒泡排序，找到一个最大的泡泡，
但是这里面的比较方式不一样，a>b,b>c,推出a>c在这里不一定成立，
所以还要遍历一遍确认一下这个虚拟选手是否大于所有选手。复杂度为n.
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int a[50010][6];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=5;j++)
            scanf("%d",&a[i][j]);
    
   int win=1;
   for(int i=2;i<=n;i++)
   {
        int f=0;
        for(int j=1;j<=5;j++)
            if(a[i][j]<a[win][j])
                f++;
        if(f>=3)win=i;
   }
   for(int i=1;i<=n;i++)
    if(i!=win)
    {
        int f=0;
        for(int j=1;j<=5;j++)
            if(a[i][j]<a[win][j])
                f++;
        if(f>=3)
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<win<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}