#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e7 + 10, MOD = 1e9 + 7;

int n;
int g[4][4] = {
    {1, 1, 1, 1},
    {0, 0, 1, 1},
    {0, 1, 0, 1},
    {1, 0, 0, 0},
};
int f[2][4];

int main()
{
    scanf("%d", &n);
    f[1][0] = 1;

    for (int i = 1; i <= n; i ++ )
    {
        memset(f[i + 1 & 1], 0, sizeof f[0]);
        for (int j = 0; j < 4; j ++ )
            for (int k = 0; k < 4; k ++ )
                if(g[j][k]==1)
                    f[i + 1 & 1][k] = (f[i + 1 & 1][k] + f[i & 1][j]) % MOD;
    }

    printf("%d\n", f[n + 1 & 1][0]);
    //cout<<f[n&1][3]+f[n&1][0]<<endl;

    return 0;
}