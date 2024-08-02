#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

signed main()
{
    int n; cin>>n;
    string s; cin>>s; s='@'+s+'@';
    int m; cin>>m;
    int a[200010]={0};
    for(int i=1;i<=n;i++)
        if(s[i]=='1' && s[i+1]=='0')
            a[i]++;
    for(int i=1;i<=n;i++)a[i]+=a[i-1];
    while(m--)
    {
        int l,r; scanf("%lld %lld",&l,&r);
        cout<<a[r-1]-a[l-1]<<endl;
    }

    return 0;
}