#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    LL sum=0;
    for(int i=1;i<=n;i++)sum+=(2*i-1)*i;
    cout<<sum<<" "<<n*2-1<<endl;

    int sign=1, h=1, l=2;
    for(int i=1;i<=n*2-1;i++)
    {
        if(sign)
        {
            printf("%d %d ",1,h);
            for(int j=n;j>=1;j--)printf("%d ",j);
            cout<<endl;
            h++;
        }
        else
        {
            printf("%d %d ",2,l);
            for(int j=n;j>=1;j--)printf("%d ",j);
            cout<<endl;
            l++;
        }
        sign^=1;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}