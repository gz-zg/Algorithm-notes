// #include <bits/stdc++.h>
// using namespace std;
// const int N = 200010;

// int n; 
// int a[N];

// bool check(int mid)
// {
//     if(mid==n)return true;
//     else
//     {
//         int l=mid+1,r=n;
//         int k=-2e9;
//         while(l<=r)
//         {
//             if(a[l]<=a[r])
//             {
//                 if(a[l]>=k)k=a[l],l++;
//                 else return false;
//             }
//             else
//             {
//                 if(a[r]>=k)k=a[r],r--;
//                 else return false;
//             }
//         }
//         return true;
//     }
// }

// void solve()
// {
//     cin>>n;
//     for(int i=1;i<=n;i++)scanf("%d",&a[i]);
//     int l=0,r=n;
//     while(l<r)
//     {
//         int mid=(l+r)/2;
//         if(check(mid))r=mid;
//         else l=mid+1;
//     }
//     cout<<l<<endl;
// }

// signed main()
// {
//     int t; cin>>t;
//     while(t--)solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int N = 200010;

int n;
int a[N];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    int k=n;
    while(k-1>=1 && a[k-1]>=a[k])k--;
    while(k-1>=1 && a[k-1]<=a[k])k--;
    cout<<k-1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}