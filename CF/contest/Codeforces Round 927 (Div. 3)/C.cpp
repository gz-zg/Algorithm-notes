#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];

void solve()
{
    int n,m; cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    string s; cin>>s; s='0'+s;
    
    int l=1, r=n;
    for(int i=1;i<=n-1;i++)
        if(s[i]=='L')l++;
        else r--;
    
    vector<int>ans;
    int res=a[l]%m;
    ans.push_back(res);
    for(int i=n-1;i>=1;i--)
    {
        if(s[i]=='L')
        {
            l--;
            res=(res*a[l])%m;
            ans.push_back(res);
        }
        else
        {
            r++;
            res=(res*a[r])%m;
            ans.push_back(res);
        }
    }
    for(int i=n-1;i>=0;i--)cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}