#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,l,r;
int a[200010];

void solve()
{
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);
	int ans=0;
	for(int i=2;i<=n;i++)
	{
		auto it1=lower_bound(a+1,a+i,l-a[i]);
		auto it2=upper_bound(a+1,a+i,r-a[i]);
		ans+=it2-it1;
	}   
	cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}