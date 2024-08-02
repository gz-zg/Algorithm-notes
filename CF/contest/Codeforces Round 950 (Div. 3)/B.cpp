#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[110];

bool cmp(int a,int b){return a>b;};

void solve()
{
    int n,f,k; cin>>n>>f>>k;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);

    int tag=a[f];
    sort(a+1,a+1+n,cmp);
    int l,r;
    for(int i=1;i<=n;i++)
        if(a[i]==tag)
        {
            l=i;
            break;
        }
    for(int i=n;i>=1;i--)
        if(a[i]==tag)
        {
            r=i;
            break;
        }

    if(r<=k)cout<<"YES"<<endl;
    else if(l>k)cout<<"NO"<<endl;
    else cout<<"MAYBE"<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}