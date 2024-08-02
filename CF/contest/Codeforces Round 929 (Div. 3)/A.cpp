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
        LL sum=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum+=abs(a[i]);
        }
        cout<<sum<<endl;
    }

    return 0;
}