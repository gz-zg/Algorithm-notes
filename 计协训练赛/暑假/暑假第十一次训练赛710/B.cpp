#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k; 
string s;

void solve()
{
    cin>>n>>k>>s; s='@'+s;
    int pos1,pos2;
    for(int i=1;i<=n;i++)
        if(s[i]=='*')
        {
            s[i]='x';
            pos1=i;
            break;
        }
    for(int i=n;i>=1;i--)
        if(s[i]=='*' || s[i]=='x')
        {
            s[i]='x';
            pos2=i;
            break;
        }

    for(int i=pos1;i<=pos2;i++)
    {
        int j=min(i+k,pos2);
        while(s[j]=='.')j--;
        if(j==i)break;
        else
        {
            s[j]='x';
            i=j-1;
        }
    }
    int ans=0;
    for(char i:s)
        if(i=='x')
            ans++;
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}