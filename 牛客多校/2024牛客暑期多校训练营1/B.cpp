#include <bits/stdc++.h>
using namespace std;
#define int long long
#define LL long long
const int N = 5050;
int c[N][N], f[N][N];

int n, m, p;

int qmi(int a, int b, int p) // 快速幂
{
	int ans = 1 % p;
	for (; b; b >>= 1)
	{
		if (b & 1)
			ans = ans * a % p;
		a = a * a % p;
	}
	return ans;
}

void init()
{
	c[0][0] = 1;
	for (int i = 1; i <= 5000; i++)
	{
		c[i][0] = c[i][i] = 1;
		for (int j = 1; j < i; j++)
			c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % p;
	}

	f[0][0] = 1; // f[i][j] i个不同数 j个特殊位的方案数
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= m - 1; j++)
			f[i][j] = (i * (f[i - 1][j - 1] + f[i][j - 1])) % p;
}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> p;

	init();

	int ans1 = 0, ans2 = 0;

	for (int i = 1; i <= n; i++)
	{
		int t1 = (qmi(2, i, p) - 1 + p) % p;
		int t2 = qmi(2, n - i, p);
		ans1 = (ans1 + ((c[n][i] * qmi(t1, m - 1, p) % p) * qmi(t2, m - 1, p) % p)) % p;
	}

	for (int k = 1; k <= n; k++)
	{
		if (k == 1) ans2 = (ans2 + n * qmi(2, (n - k) * (m - 1), p)) % p;
		else
		{
			int sum = 0;
			int mul = 1;  
			int t1 = ((qmi(2, k, p) - k - 1) % p + p) % p;//非特殊位的普通位的种类数
			for (int t = m - 1; t >= k; t--)
			{
				sum = (sum + mul * c[m - 1][t] % p * f[k][t] % p) % p;
				mul = (mul * t1) % p;
			}
			sum = (((sum * c[n][k]) % p) * qmi(2, (n - k) * (m - 1), p)) % p;
			ans2 = (ans2 + sum) % p;
		}
	}
	
	cout << ((ans1 - ans2) % p + p) % p;

	return 0;
}