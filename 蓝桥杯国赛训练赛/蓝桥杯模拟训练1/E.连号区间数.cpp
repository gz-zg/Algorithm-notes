//暴力过不了，呜呜呜
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 50010;

int a[N];

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);

    int ans=n;
    for(int i=1;i<=n;i++)
    {
        int MAX=a[i],MIN=a[i]; 
        for(int j=i+1;j<=n;j++)
        {
            MAX=max(MAX,a[j]);
            MIN=min(MIN,a[j]);
            if(MAX-MIN==j-i)ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}