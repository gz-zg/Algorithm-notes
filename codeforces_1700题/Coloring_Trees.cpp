// #include <bits/stdc++.h>
// using namespace std;
// typedef long long LL;
// const int INF = 0x3f3f3f3f;
// const int mod = 1e9 + 7; 
// const int N = 100010;

// LL dp[105][105][105];
// LL c[105];
// LL p[N][N];

// int main()
// {
//     int n,m,K; cin>>n>>m>>K;
//     for(int i=1;i<=n;i++)cin>>c[i];
//     for(int i=1;i<=n;i++)
//         for(int j=1;j<=m;j++)
//             cin>>p[i][j];

//     memset(dp,0x3f,sizeof dp);

//     for(int i=1;i<=n;i++)
//     {
//         if(c[i])
//         {
//             for(int k=1;k<=K;k++)
//             {
//                 dp[i][c[i]][k]=dp[i-1][c[i]][k];
//                 for(int l=1;l<=m;l++)
//                 {
//                     if(l==c[i])continue;
//                     dp[i][c[i]][k]=min(dp[i][c[i]][k],dp[i-1][l][k-1]);
//                 }
//             }
//         }
//         else
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 for(int k=1;k<=K;k++)
//                 {
//                     dp[i][j][k]=dp[i-1][j][k]+p[i][j];
//                     for(int l=1;l<=m;l++)
//                     {
//                         if(l==j)continue;
//                         dp[i][j][k]=min(dp[i][j][k],dp[i-1][l][k-1]+p[i][l]);
//                     }
//                 }
//             }
//         }
//     }
//     LL ans=INF;
//     for(int i=1;i<=m;i++)

//     return 0;
// }