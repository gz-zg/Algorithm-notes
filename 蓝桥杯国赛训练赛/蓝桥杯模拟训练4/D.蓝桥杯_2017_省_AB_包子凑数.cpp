//裴蜀定理
//互质的两个正整数在系数不能为负数时不能凑出的数的最大值为(a-1)*(b-1)-1;
//通过《完全背包》求出能否凑出数字
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n; 
int a[110];
bool dp[110][10010];

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int _gcd=0;
    for(int i=1;i<=n;i++)_gcd=gcd(_gcd,a[i]);

    if(_gcd!=1)cout<<"INF"<<endl;  //此时即便每种蒸笼的数量可以为负数，也有无限个凑不出来的数字
    else  //如果没有【每种蒸笼的数量必须>=0】这个限制的话，是可以凑出所有的数字的，
    {     //但是因为有了这个限制，所以会有有限个数字凑不出来，这有限个凑不出来的数字的最大值为(a-1)*(b-1)-1;
        for(int i=0;i<=n;i++)dp[i][0]=true;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=10000;j++)
                if(j>=a[i])dp[i][j] = (dp[i-1][j] || dp[i][j-a[i]]);
                else dp[i][j]=dp[i-1][j];
        int ans=0;
        for(int i=1;i<=10000;i++)
            if(dp[n][i]==false)
                ans++;
        cout<<ans<<endl;
    }

    return 0;
}