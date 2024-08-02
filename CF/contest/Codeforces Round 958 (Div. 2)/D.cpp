// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int a[300010];
// vector<vector<int>>g;

// int dfs(int u,int pre)
// {
//     for(int i:g[u])
//         if(i!=pre)
//         {
//             if(st[u]==true)st[i]=false;
//             else st[i]=true;
//             dfs(i,u);
//         }
// }

// void solve()
// {
//     int n; cin>>n;
//     g=vector<vector<int>>(n+1);
//     for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
//     for(int i=1;i<=n-1;i++)
//     {
//         int x,y; scanf("%lld %lld",&x,&y);
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     if(n==1)cout<<a[1]<<endl;
//     else
//     {
//         dfs(1,0);

//         // for(int i=1;i<=n;i++)st[i]=false;
//         // st[1]=true;
//         // dfs(1,0);
//         // int sum1=0;
//         // for(int i=1;i<=n;i++)
//         //     if(st[i]==true)
//         //         sum1+=a[i];
//         // int sum2=0;
//         // for(int i=1;i<=n;i++)sum2+=a[i];
//         // sum2-=sum1;
//         // int ans=sum1+sum2+min(sum1,sum2);
//         // cout<<ans<<endl;
//     }
// }

// signed main()
// {
//     int t; cin>>t;
//     while(t--)solve();
//     return 0;
// }