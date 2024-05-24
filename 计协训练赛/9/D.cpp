// #include <bits/stdc++.h>
// using namespace std;
// typedef long long LL;
// const int INF = 0x3f3f3f3f;
// const int mod = 1e9 + 7; 
// const int N = 200010;

// int a[N];

// void solve()
// {
//     int n; cin>>n;
//     for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    
//     map<int,int>ans;  //ans为 0的下标->对应的乘积的2的指数
//     map<int,int>mp,backup;
//     vector<int>path;
//     for(int i=1;i<=n;i++)  //以0为分界点进行分段处理
//     {
//         if(a[i]==0)
//         {
//             if( (mp[-1]+mp[-2])%2==0 )ans[i]=(mp[-1]+mp[-2]);
//             else
//             {
//                 int a1,a2; map<int,int>mpjj=mp;
//                 for(int i=0;i<path.size();i++)
//                 {
//                     if(path[i]<0)
//                     {
//                         mpjj[path[i]]--;
//                         a1=(mpjj[-1]+mpjj[-2]);
//                     }
//                     else mpjj[path[i]]--;
//                 }
//                 mpjj=mp;
//                 for(int i=path.size();i>=0;i--)
//                 {
//                     if(path[i]<0)
//                     {
//                         mpjj[path[i]]--;
//                         a2=(mpjj[-1]+mpjj[-2]);
//                     }
//                     else mpjj[path[i]]--;
//                 }
//                 ans[i]=max(a1,a2);
//             }
//             path.clear();
//             mp=backup;
//         }
//         else
//         {
//             mp[a[i]]++;  //mp里面最多只有四种值-2，-1，1，2
//             path.push_back(i);
//         }
//     }

//     if( (mp[-1]+mp[-2])%2==0 )ans[i]=(mp[-1]+mp[-2]);
//     else
//     {
//         int a1,a2; map<int,int>mpjj=mp;
//         for(int i=0;i<path.size();i++)
//         {
//             if(path[i]<0)
//             {
//                 mpjj[path[i]]--;
//                 a1=(mpjj[-1]+mpjj[-2]);
//             }
//             else mpjj[path[i]]--;
//         }
//         mpjj=mp;
//         for(int i=path.size();i>=0;i--)
//         {
//             if(path[i]<0)
//             {
//                 mpjj[path[i]]--;
//                 a2=(mpjj[-1]+mpjj[-2]);
//             }
//             else mpjj[path[i]]--;
//         }
//         ans[i]=max(a1,a2);
//     }
//     vector<int>hhh;
//     for(int i=1;i<=n;i++)
//         if(a[i]==0)hhh.push_back(i);

//     int pos=-1;
//     int ma=-1;
//     for(auto i:ans)
//     {
//         if(i.second>ma)
//         {
//             ma=i.second
//             pos=i.first;
//         }
//     }
//     for(int i=0;i<hhh.size();i++)
//     {
//         if(hhh[i]==pos)
//         {
//             if(i+1<hhh.size())cout<<pos<<" "<<hhh[i+1]<<endl;
//             else cout<<pos<<" "<<0<<endl;
//         }
//     }
// }

// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
//         solve();
//     }

//     return 0;
// }
