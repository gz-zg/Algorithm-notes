//状态机模型
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e18;
const int N = 100010;

int n;
int x[N],h[N];
int f[N][3];

signed main()
{   
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld %lld",&x[i],&h[i]);

    x[0] = -INF; x[n + 1] = INF;
	for (int i = 1; i <= n; i++) 
    {
		f[i][0] = max(f[i - 1][0], max(f[i - 1][1], f[i - 1][2]));

		if (x[i] - h[i] > x[i - 1] + h[i - 1]) 
        { //第i-1个树可以右倒,第i个树左倒 
			f[i][1] = max(f[i][1], f[i - 1][0] + 1);
			f[i][1] = max(f[i][1], f[i - 1][1] + 1);
			f[i][1] = max(f[i][1], f[i - 1][2] + 1);
		}
		else if (x[i] - h[i] > x[i - 1]) 
        {//第i-1个树不可以右倒,第i个树左倒 
			f[i][1] = max(f[i][1], f[i - 1][0] + 1);
			f[i][1] = max(f[i][1], f[i - 1][1] + 1);
		}

		if (x[i] + h[i] < x[i + 1]) 
        { //右倒
			f[i][2] = max(f[i][2], f[i - 1][0] + 1);
			f[i][2] = max(f[i][2], f[i - 1][1] + 1);
			f[i][2] = max(f[i][2], f[i - 1][2] + 1);
		}
	}
	cout << max(f[n][0], max(f[n][1], f[n][2])) << endl;
    
    return 0;
}