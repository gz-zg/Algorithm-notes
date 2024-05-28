#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9+7;

int dp[110][110][110];

int dfs(int n,int m,int d)
{
  if(n==0&&m==1&&d==1)return 1;
  if (n < 0 || m < 1 || d < 1 || d>m) return 0;//剪枝，同时保证d不大于100
  if (dp[n][m][d]!=-1) return dp[n][m][d];

  return dp[n][m][d]=(dfs(n-1,m,d*2)+dfs(n,m-1,d-1))%mod;
}

signed main()
{
  int n,m;
  cin>>n>>m;
  memset(dp,-1,sizeof dp);
  cout<<dfs(n,m,2)<<endl;

  return 0;
}