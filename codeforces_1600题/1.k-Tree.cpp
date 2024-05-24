#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k,d;
LL f[110][2];  //状态表示f[i][0/1]->和为i并且是否至少包含一个>=d的边的路径的数量

int main()
{
    cin>>n>>k>>d;
    
    f[0][0]=1;
	for(int i=1;i<=n;i++)//枚举当前的容量 
		for(int j=1;j<=min(k,i);j++)//枚举最后一次的数字 
		{
			if(j>=d) f[i][1]=(f[i][1]+f[i-j][0]+f[i-j][1])%mod;
			else
			{
				f[i][1]=(f[i][1]+f[i-j][1])%mod;
				f[i][0]=(f[i][0]+f[i-j][0])%mod;
			}
		}

	cout<<f[n][1]<<endl;

    return 0;
}