// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int n,x;
// int a[510];

// void solve()
// {
//     cin>>n>>x;
//     for(int i=1;i<=n;i++)cin>>a[i];
//     bool sign=true;
//     for(int i=2;i<=n;i++)
//         if(a[i]<a[i-1])
//             sign=false;
//     if(sign){cout<<0<<endl;return;}

//     //否则就一定要交换才行了，那x就一定会进入数组a，最后必定会有一个原数组a内的元素出来
//     /*
//     由于n不大，可以枚举最后出来的数是哪个，并将x加进去，构成新的数组b
//     将b数组排序就是a数组其中一种可能的最终状态，
//     如果判断所有可能的数组b是否合法，如果合法的话，将其操作次数与ans取min
//     */
//     int ans=1e18;     
//     int b[510],xx;
//     for(int i=1;i<=n;i++)
//     {
//         memcpy(b,a,sizeof a);
//         xx=x;
//         b[i]=x;
//         sort(b+1,b+1+n);
//         int now=0;
//         bool sc=true;
//         for(int i=1;i<=n;i++)
//         {
//             if(a[i]==b[i])continue;
//             else
//             {
//                 if(xx<a[i])
//                 {
//                     xx=a[i];
//                     now++;
//                 }
//                 else
//                 {
//                     sc=false;
//                     break;
//                 }
//             }
//         }
//         if(sc)ans=min(ans,now);
//     }
//     if(ans!=1e18)cout<<ans<<endl;
//     else cout<<-1<<endl;
// }

// signed main()
// {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int t; cin>>t;
//     while(t--)solve();
//     return 0;
// }
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,x;
int a[510];

bool check()
{
    for(int i=2;i<=n;i++)
        if(a[i]<a[i-1])
            return false;
    return true;
}

void solve()
{
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    bool sign=true;
    for(int i=2;i<=n;i++)
        if(a[i]<a[i-1])
            sign=false;
    if(sign){cout<<0<<endl;return;}

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(x<a[i])swap(x,a[i]),ans++;
        if(check())
        {
            cout<<ans<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}