//暴力->O(n^3)/O(n^2) 或者 最大连续子序列和模型->dp->O(n)
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[110];
int f[110];

//dp(最大连续子序列和)写法
int main()
{
    int n; cin>>n;
    int s1=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)s1++;
    }

    for(int i=1;i<=n;i++)
        if(a[i]==1)a[i]=-1;
        else a[i]=1;

    int res=-2e9;
    for(int i=1;i<=n;i++)
    {
        f[i]=max(f[i-1]+a[i],a[i]);
        res=max(res,f[i]);
    }
  
    cout<<s1+res<<endl;

    return 0;
}

//暴力写法
// int main()
// {
//     int n; cin>>n;
//     int ans=0;
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//         if(a[i]==1)ans++;
//     }
    
//     int res=-2e9;
//     for(int i=1;i<=n;i++)
//         for(int j=i;j<=n;j++)
//         {
//             int num=0;
//             for(int k=i;k<=j;k++)
//                 if(a[k]==1)num++;
//             res=max(res,j-i+1-num-num);
//         }

//     cout<<ans+res<<endl;

//     return 0;
// }
