//有时候一定要想想看合法情况最终化简后的共同特征是什么
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m, q;
int c[5010][5010];

int qmi(int a, int b, int p)  //快速幂
{
    int ans = 1 % p;
    for(;b;b>>=1)
    {
        if(b&1)ans=ans*a%p;
        a=a*a%p;
    }
    return ans;
}

signed main()
{
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) 
    {
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; j++)c[i][j] = (c[i-1][j] + c[i-1][j-1]) % q;
    }
    
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int t = c[n][i];
        t = t * qmi((qmi(2, i, q) - 1), m - 1, q) % q;
        t = t * qmi(qmi(2, n - i, q), m - 1, q) % q;
        ans = (ans + t) % q;
    }
    cout<<ans<<endl;

    return 0;
}