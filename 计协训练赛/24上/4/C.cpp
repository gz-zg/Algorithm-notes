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
    while(t--)
    {
        int n; cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            int aa; string b;
            cin>>aa>>b;

            int D=0,U=0;
            for(int j=0;j<aa;j++)
            {
                if(b[j]=='D')D++;
                else U++;
            }
            if(D>=U)
            {
                int k=D-U;
                a[i]+=k;
                a[i]%=10;
            }
            else
            {
                int k=U-D;
                a[i]-=k;
                if(a[i]<0)a[i]=10+a[i];
            }
        }
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}