#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int p[N];
LL a[N];
bool st[N];

void solve()
{
    LL n,k,p1,p2; cin>>n>>k>>p1>>p2;
    LL backup=k;
    for(int i=1;i<=n;i++)scanf("%d",&p[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);

    LL m1=0,m2=0,tmp1=0,tmp2=0;
    memset(st,false,sizeof st);   
    for(int i=1;i<=backup;i++)
    {   
        if(st[p1]==false)
        {
            st[p1]=true;
            m1=max(m1,tmp1+a[p1]*k);
            tmp1+=a[p1];
            p1=p[p1];
            k--;
        }
        else break;
    }

    k=backup;
    memset(st,false,sizeof st);   
    for(int i=1;i<=backup;i++)
    {   
        if(st[p2]==false)
        {
            st[p2]=true;
            m2=max(m2,tmp2+a[p2]*k);
            tmp2+=a[p2];
            p2=p[p2];
            k--;
        }
        else break;
    }

    if(m1==m2)cout<<"Draw"<<endl;
    else if(m1<m2)cout<<"Sasha"<<endl;
    else cout<<"Bodya"<<endl;
}


int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}