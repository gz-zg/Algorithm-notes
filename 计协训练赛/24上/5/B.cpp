#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[60];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        int ans=0;
        for(auto i:mp)
        {
            ans+=i.second-1;
        }

        if(ans%2==0)cout<<n-ans<<endl;
        else cout<<n-ans-1<<endl;
    }

    return 0;
}