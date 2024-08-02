#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 300010;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    s='q'+s;
    vector<int>q(n+10); vector<int>h(n+10);
   
    for(int i=1;i<=n;i++)
        if(s[i]=='0')q[i]=q[i-1]+1;
        else q[i]=q[i-1];
    
    for(int i=n;i>=1;i--)
        if(s[i]=='1')h[i]=h[i+1]+1;
        else h[i]=h[i+1];

    vector<int>ans;
    for(int i=0;i<=n;i++)
        if( q[i]>=(i+1)/2 && h[i+1]>=(n-i+1)/2 )
            ans.push_back(i);
    
    int out=-1;
    int res=INF;
    double hhh=n/2.0;
    for(int i:ans)
        if(fabs(hhh-i)<res)
        {
            res=fabs(hhh-i);
            out=i;
        }
    cout<<out<<endl;
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