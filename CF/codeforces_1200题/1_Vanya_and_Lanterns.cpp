//贪心 或者 小数二分(不过要开long double才不会进入死循环)

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

// 小数二分居然给我干超时了！！！！！ 应该是因为精度问题吧->题目要求《与答案的绝对或相对误差不超过 10 - 9》，这个精度要求太高了，
//可能会使小数二分进入死循环而超时,这道题中需要将double换成long double就可以Accepted了hhh

//小数二分写法->Accepted
// int n,len;
// set<long double>s;

// bool check(long double m)  //区间排序①这个题目中所有区间相当于已经根据左端点从小到大进行排序了，所以不用再排序了
// {
//     long double l=-2e9,r=-2e9; //区间排序②
//     for(long double i:s)  //区间排序③
//     {
//         if(i-m<=r)r=i+m;  //正常这里是r=max(r,i+m),但是这道题中i+m绝对大于r
//         else
//         {
//             l=i-m;
//             r=i+m;
//         }
//     }
//     return (l<=0 && r>=len);
// }

// void solve()
// {
//     cin>>n>>len;
//     for(int i=1;i<=n;i++)
//     {
//         long double tmp;cin>>tmp;
//         s.insert(tmp);
//     }

//     long double l=0, r=len;
//     while(fabs(r-l)>=1e-9)  //这里表示l或者r与ans的误差小于1e-9时就退出
//     {   
//         long double m=(l+r)/2;
//         if(check(m))r=m;  //如果m在右区间
//         else l=m;
//     }
//     printf("%.10Lf",l);
// }


//贪心写法->Accepted
int n,len;
set<int>s;

void solve()  
{
    cin>>n>>len;
    for(int i=1;i<=n;i++)
    {
        int tmp;cin>>tmp;
        s.insert(tmp);
    }

    vector<int>g;
    for(int i:s)g.push_back(i);

    int ans=-2e9,pre=g[0];
    for(int i=1;i<g.size();i++)
    {
        ans=max(ans,g[i]-pre);
        pre=g[i];
    }
    double res=ans; res/=2;
    res=max(res,(double)max(g[0],len-g[g.size()-1]));
    printf("%.10lf",res);
}

int main()
{
    int t=1;
    while(t--)solve();
    return 0;
}