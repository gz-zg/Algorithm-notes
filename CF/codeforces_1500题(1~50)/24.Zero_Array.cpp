#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[100010];

signed main()
{   
    int n; cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]),sum+=a[i];
    sort(a+1,a+1+n);
    if(sum%2==1)cout<<"NO"<<endl;
    else
    {
        if(a[n]<=sum-a[n])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}