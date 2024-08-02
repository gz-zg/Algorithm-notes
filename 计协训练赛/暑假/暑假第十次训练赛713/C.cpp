#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a,b;
string s;

void solve()
{
    cin>>a>>b>>s;
    int n=a+b;

    s='@'+s;
    for(int i=1;i<=(n+1)/2;i++)
    {
        if(s[i]=='?' && s[n+1-i]!='?')s[i]=s[n+1-i];
        if(s[i]!='?' && s[n+1-i]=='?')s[n+1-i]=s[i];
        if(s[i]!='?' && s[n+1-i]!='?' && s[i]!=s[n+1-i])
        {
            cout<<-1<<endl;
            return;
        }
    }
    
    int n0=0,n1=0;
    for(char i:s)
        if(i=='1')n1++;
        else if(i=='0')n0++;
    if(n1>b || n0>a)
    {
        cout<<-1<<endl;
        return;
    }
    else 
    {
        n1=b-n1, n0=a-n0;
        if((n1+n0)%2==0 && n0%2==1)
        {
            cout<<-1<<endl;
            return;
        }
        for(int i=1;i<=(n+1)/2;i++)
            if(s[i]=='?')
                if(i!=n+1-i)
                {
                    if(n1>=2)n1-=2,s[i]=s[n+1-i]='1';
                    else n0-=2,s[i]=s[n+1-i]='0';
                }
                else
                {
                    if(n1!=0)s[i]='1';
                    else s[i]='0';
                }
        cout<<s.substr(1)<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}