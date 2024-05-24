#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[110],b[110];

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int m; cin>>m;
    for(int i=1;i<=m;i++)cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    
    int ans=0;
    int l=1,r=1;//双指针
    while(l<=n && r<=m)
    {
        if( abs(a[l]-b[r])<=1 )
        {
            ans++;
            l++; 
            r++;
        }
        else
        {
            if(a[l]<b[r])l++;
            else r++;
        }
    }
    cout<<ans<<endl;

    return 0;
}