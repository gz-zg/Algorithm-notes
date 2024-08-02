#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n,t; cin>>n>>t;
    int k; cin>>k;

    int l=1,r=n;
    while(l<r)
    {
        int mid=(l+r)/2;
        cout<<"?"<<" "<<1<<" "<<mid<<endl;
        int x; cin>>x;
        if(mid-x>=k)r=mid;
        else l=mid+1;
    }
    cout<<"!"<<" "<<l<<endl;

    return 0;
}