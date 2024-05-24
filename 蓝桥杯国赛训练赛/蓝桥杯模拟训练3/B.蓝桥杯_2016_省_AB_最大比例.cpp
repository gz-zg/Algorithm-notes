#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
int x[110],a[110],b[110];

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int gcd_sub(int a,int b)
{
    if(a<b)swap(a,b);
    if(b==1)return a;
    else return gcd_sub(b,a/b);
}

signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>x[i];
    sort(x+1,x+1+n);
    int idx=1;
    for(int i=2;i<=n;i++)
        if(x[i]!=x[i-1])
        {
            int d = gcd(x[i],x[1]);
            a[idx]=x[i]/d;
            b[idx]=x[1]/d;
            idx++;
        }

    int up=a[1],down=b[1];
    for(int i=2;i<idx;i++)
    {
        up=gcd_sub(up,a[i]);
        down=gcd_sub(down,b[i]);
    }

    cout<<up<<"/"<<down<<endl;

    return 0;
}