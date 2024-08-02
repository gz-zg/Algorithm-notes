#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a,b,k;

void solve()
{
    cin>>a>>b>>k;
    
    if(k>=62){cout<<"NO"<<endl;return;}
    if(k==1)
    {
        if((a%b==0 || b%a==0) && a!=b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    
    int maxc=0,minc;
    if((a%b==0 || b%a==0) && a!=b)minc=1;
    else minc=2;
    for(int i=2;i*i<=a;i++)
    {
        while(a%i==0)
        {
            a/=i;
            maxc++;
        }
        if(maxc>k){cout<<"YES"<<endl;return;}
    }
    if(a>1)maxc++;

    for(int i=2;i*i<=b;i++)
    {
        while(b%i==0)
        {
            b/=i;
            maxc++;
        }
        if(maxc>k){cout<<"YES"<<endl;return;}
    }
    if(b>1)maxc++;
    
    if(minc<=k && k<=maxc)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}