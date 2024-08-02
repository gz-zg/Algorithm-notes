//贪心+构造
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];

signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    sort(a+1,a+1+n);
    
    vector<int>res(n+10);
    int idx=1;
    for(int i=2;i<=n;i+=2)res[i]=a[idx++];
    for(int i=1;i<=n;i+=2)res[i]=a[idx++];
    
    int ans=0;
    for(int i=2;i<=n;i+=2)
        if(i-1>=1 && res[i-1]>res[i] && i+1<=n && res[i+1]>res[i])
            ans++;
    
    cout<<ans<<endl;
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    cout<<endl;

    return 0;
}