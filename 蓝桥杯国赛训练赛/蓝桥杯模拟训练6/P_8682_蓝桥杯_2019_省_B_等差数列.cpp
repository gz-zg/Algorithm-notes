#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[100010];

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+n);
    
    vector<int>c;
    for(int i=2;i<=n;i++)c.push_back(a[i]-a[i-1]);
    
    int ans=0;
    for(int i:c)ans=gcd(ans,i);
    if(ans==0)cout<<n<<endl;
    else cout<<(a[n]-a[1])/ans+1<<endl;

    return 0;
}