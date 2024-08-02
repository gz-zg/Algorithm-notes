#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];
int b[N];

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n-1;i++)b[i]=gcd(a[i],a[i+1]);

    int num=0;
    int maxv,idx;
    for(int i=1;i<=n-2;i++)
    {
        if(b[i]>b[i+1])
        {
            maxv=b[i];
            idx=i;
            int j;
            for(j=i+1;j<=n-1;j++)
                if(b[j]<maxv)num++;
                else break;
            i=j-1;
        }
    }
    if(num>=3)cout<<"NO"<<endl;
    else
    {
        if(num==0)cout<<"YES"<<endl;
        else
        {
            vector<bool>st(n+10);
            st[idx+1]=true;
            
        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}