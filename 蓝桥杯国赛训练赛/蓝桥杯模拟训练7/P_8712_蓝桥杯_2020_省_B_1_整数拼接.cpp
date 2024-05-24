#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;

int a[100010];
int mp[15][100010]; //数组本质上也是一种map，并且数组比map更快

signed main()
{
    int n,k; cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        int t = a[i];
        for(int i=1;i<=10;i++)
        {
            t*=10;
            mp[i][t%k]++;
        }
    }
    
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        string s=to_string(a[i]);
        int len =s.size();

        int t=1;
        for(int i=1;i<=len;i++)t*=10;
        if( (a[i]*t+a[i])%k==0 )ans--;

        int tmp=k-a[i]%k;
        if(tmp==k)tmp=0;
        ans+=mp[len][tmp];
    }
    cout<<ans<<endl;

    return 0;
}