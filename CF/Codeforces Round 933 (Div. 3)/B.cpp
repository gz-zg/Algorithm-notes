#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

LL a[N];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=1;i<=n;i++)scanf("%lld",&a[i]);

        bool sign=true;
        LL b[N]={0};
        for(int i=1;i<=n-2;i++)
        {
            if(a[i]>=b[i])
            {
                LL cha=a[i]-b[i];
                b[i+1]+=2*cha;
                b[i+2]+=cha;
            }
            else
            {
                sign=false;
                break;
            }   
        }

        if(a[n-1]!=b[n-1] || a[n]!=b[n])sign=false;

        if(sign)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}