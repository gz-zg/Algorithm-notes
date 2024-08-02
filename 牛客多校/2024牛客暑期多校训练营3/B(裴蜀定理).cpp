#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,d;
int h[110];

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b); 
}

signed main()
{
    cin>>n>>d;
    for(int i=1;i<=n;i++)cin>>h[i];
    int GCD=0;
    for(int i=1;i<=n;i++)GCD=gcd(GCD,h[i]);
    cout<<min(d%GCD,GCD-d%GCD)<<endl;

    return 0;
}