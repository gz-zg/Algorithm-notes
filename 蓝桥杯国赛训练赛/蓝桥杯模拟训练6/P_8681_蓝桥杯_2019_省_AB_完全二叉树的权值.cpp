#include<bits/stdc++.h>
#define int long long 
using namespace std;

int a[100010];

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);

    int ans=-2e9,idx=-2e9;
    for(int i=1,c=1,h=1;i<=n;h++,i+=c,c*=2)
    {
        int sum=0;
        for(int j=i;j<=n && j<i+c;j++)sum+=a[j];
        if(sum>ans)ans=sum,idx=h;
    }
    cout<<idx<<endl;

    return 0; 
}