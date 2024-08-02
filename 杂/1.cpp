#include <iostream>
#define int long long
using namespace std;

const int N = 300010, M = 110, mod=804188993;
int f[N][M];
int a[N];

signed main()
{
    int n; cin >> n;
    for(int i  = 1 ; i <= n ; i ++) cin >> a[i];

    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <= 108 ; j ++)
        {
            f[i][j] = (f[i][j] + f[i-1][j])%mod;
            if(a[i] < j) f[i][j] = (f[i][j] + f[i-1][j])%mod;
            else if(a[i] > j) f[i][j] += 0;
            else
            {
                f[i][j]=(f[i][j]+1)%mod;
                for(int k = 1 ; k <= j ; k ++) f[i][j] = (f[i][j] + f[i-1][k])%mod;
            }
        }
    }
    int sum = 0;
    for(int i=1;i<=108;i++)sum=(sum+f[n][i]*i)%mod;
    cout<<sum<<endl;

    return 0;
}