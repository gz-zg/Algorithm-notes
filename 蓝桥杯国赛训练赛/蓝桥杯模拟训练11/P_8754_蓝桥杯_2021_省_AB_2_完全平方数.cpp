#include<bits/stdc++.h>
#define int long long 
using namespace std;

signed main()
{
    int n; cin>>n;
    map<int,int>mp;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            mp[i]++;
            n/=i;
        }
    }
    if(n>1)mp[n]++;

    int ans=1;
    for(auto i:mp)
        if(i.second%2==1)
            ans*=i.first;
    cout<<ans<<endl;

    return 0;
}
