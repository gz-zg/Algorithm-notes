#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 500010;

int Sum[N];

int main()
{
    int k; cin>>k;
    string s; cin>>s;
    char a,b; cin>>a>>b;

    int n=s.size();
    s='0'+s;
    for(int i=1;i<=n;i++)
        if(s[i]==a)Sum[i]=Sum[i-1]+1;
        else Sum[i]=Sum[i-1];

    LL ans=0;
    for(int i=1;i<=n;i++)
        if(s[i]==b && i-k+1>=1)
            ans+=Sum[i-k+1];
    
    cout<<ans<<endl;

    return 0;
}