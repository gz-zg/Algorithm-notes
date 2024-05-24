#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; char c; cin>>n>>c;
        string s; cin>>s;

        if(c=='g')
        {
            cout<<0<<endl;
            continue;
        }

        int A[N]={0};int ai=0; 
        int B[N]={0};int bi=0;
        for(int i=0;i<n;i++)
        {
            char kc=s[i];
            if(kc==c)A[++ai]=i;
            if(kc=='g')B[++bi]=i;
        }
       
       int res=-1;
        for(int i=1;i<=ai;i++)
        {
            int k=A[i];
            int ans=-1;
            for(int j=1;j<=bi;j++)
            {
                int h=B[j];
                if(h>k)
                {
                    ans=h-k;
                    break;
                }
            }
            if(ans==-1)ans=n-(k-B[1]);
            res=max(res,ans);
        }
        cout<<res<<endl;
    }

    return 0;
}