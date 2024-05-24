#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[110];

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        for (int i = 1; i <= n; i++)cin>>a[i];
        LL ans=a[1];
        for (int i = 2; i <= n; i++)
        {
            if(a[i]>ans)ans=a[i];
            else
            {
                int t=a[i];
                while (a[i]<=ans)a[i]+=t;
                ans=a[i];
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
