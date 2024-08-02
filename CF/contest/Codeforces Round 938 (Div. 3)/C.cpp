#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];
bool st[N];

void solve()
{
    memset(st,false,sizeof st);

    int n; cin>>n;
    LL k; cin>>k;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    LL l,r;
    if(k%2==0){l=k/2;r=k/2;}
    else {l=k/2+1;r=k/2;}
    int ans=0;
    for(int i=1;i<=n;i++)
        if(st[i]==true)continue;
        else
        {
            if(a[i]<=l)
            {
                st[i]=true;
                ans++;
                l-=a[i];
            }
            else 
            {
                a[i]-=l;
                break;
            }
        }
    for(int i=n;i>=1;i--)
        if(st[i]==true)continue;
        else
        {
            if(a[i]<=r)
            {
                st[i]=true;
                ans++;
                r-=a[i];
            }
            else
            {
                a[i]-=r;
                break;
            }
        }
    cout<<ans<<endl;
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