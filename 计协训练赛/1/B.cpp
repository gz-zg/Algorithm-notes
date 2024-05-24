#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,q; scanf("%d%d",&n,&q);
        int ji=0,ou=0; LL sum=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
            if(a[i]%2==0)ou++;
            else ji++;
        }
        while (q--)
        {
            int type,x; scanf("%d%d",&type,&x);
            if(type==0)
            {
                sum+=ou*x;
                if(x%2!=0)ou=0,ji=n;
            }
            else
            {
                sum+=ji*x;
                if(x%2!=0) ji=0,ou=n;
            }
            cout<<sum<<endl;
        } 
    }

    return 0;
}