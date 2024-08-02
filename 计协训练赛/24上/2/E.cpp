#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int an[N];
LL an_s[N];
pair<int,int> Z[N]; int idx;

int aq[N];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,q; cin>>n>>q;
        for(int i=1;i<=n;i++)scanf("%d",&an[i]);
        
        for(int i=1;i<=n;i++)an_s[i]=an_s[i-1]+an[i];
        
        idx=0;
        Z[++idx]={an[1],1};
        for(int i=2;i<=n;i++)
            if(an[i]>Z[idx].first)
                Z[++idx]={an[i],i};
        
        for(int i=1;i<=q;i++)
        {
            scanf("%d",&aq[i]);
            
            int l=1; int r=idx;
            while(l<r)
            {
                int m=(l+r)/2;
                if(Z[m].first>aq[i])r=m;
                else l=m+1;
            }
            if(Z[l].first>aq[i])cout<<an_s[Z[l].second-1]<<" ";
            else cout<<an_s[n]<<" ";
        }
        cout<<endl;
    }

    return 0;
}