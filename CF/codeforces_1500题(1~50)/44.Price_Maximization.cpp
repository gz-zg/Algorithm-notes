#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
int a[200010];

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    int ans=0;
    vector<int>yu;
    for(int i=1;i<=n;i++)ans+=a[i]/k ,yu.push_back(a[i]%k);
    sort(yu.begin(),yu.end());

    for(int r=n-1,l=0; l<r; r--)
    {
        while(yu[l]+yu[r]<k && l+1<r)l++;
        if(yu[r]+yu[l]>=k)ans++,l++;
        else break;
    }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}