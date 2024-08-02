//本题有两个关键点：
//①对于任意一条斜线，不管这个矩阵怎么平移，该斜线上的0和1的数量都不会改变，并且所有斜线都能移到主对角线上
//②主对角线上1的数量越多，ans就越少
//因此只需要遍历每一条斜线，找到其中1的数量最多的那一条斜线，将它移到主对角线上，由此得到的矩阵的XOR次数最少
#include <bits/stdc++.h>
using namespace std;

char a[2010][2010];

void solve()
{   
    int n; cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int n1=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='1')
                n1++;

    int res=-2e9;  //用来存所有斜线上的1的数量的最大值
    for(int i=0;i<n;i++)  //遍历起点a[0][i]
    {
        int num1=0;
        int h=0,l=i;
        for(int j=0;j<=n-1;j++)  //遍历该斜线上的所有元素
            if(a[h+j][(l+j)%n]=='1')
                num1++;
        res=max(res,num1);
    }

    int ans=(n-res)+(n1-res);
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}