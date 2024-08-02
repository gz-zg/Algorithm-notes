#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

char a[110][110];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=1;i<=n;i++)scanf("%s",a[i]+1);

        int ans=0;
        int hhh=n-1;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=hhh;j++)
            {
                int ii=n+1-i; int jj=n+1-j;
                int l0=0; int l1=0;

                if(a[i][j]=='0')l0++;
                else l1++;
                
                if(a[ii][jj]=='0')l0++;
                else l1++;

                if(a[jj][i]=='0')l0++;
                else l1++;

                if(a[j][ii]=='0')l0++;
                else l1++;
                
                if(l0==3)ans++;
                if(l0==2)ans+=2;
                if(l0==1)ans++;
            }
            hhh--;
        }
        cout<<ans<<endl;
    }

    return 0;
}
