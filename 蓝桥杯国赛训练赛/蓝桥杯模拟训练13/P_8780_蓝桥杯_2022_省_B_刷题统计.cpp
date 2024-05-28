#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int a,b,n; cin>>a>>b>>n;
    int t = 5*a+2*b;

    if(n%t==0)cout<<n/t*7<<endl;
    else
    {
        int w = n/t;
        int yu = n-w*t;
        int d=0;
        for(int i=1;i<=5;i++)
        {
            if(yu<=0)break;
            d++; yu-=a;
        }
        for(int i=1;i<=2;i++)
        {
            if(yu<=0)break;
            d++; yu-=b;
        }
        cout<<w*7+d<<endl;
    }

    return 0;
}