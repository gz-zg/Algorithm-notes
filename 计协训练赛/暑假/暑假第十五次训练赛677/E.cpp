#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int j=n,i=1;j>=n/2+1;j--,i++)ans=ans*j/i;
    ans/=2;
    for(int i=n/2-1;i>=1;i--)ans*=i*i;
    cout<<ans<<endl;

    return 0;
}