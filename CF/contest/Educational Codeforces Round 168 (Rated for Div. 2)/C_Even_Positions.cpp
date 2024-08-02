#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n;
string s;

void solve()
{
    cin>>n>>s;
    s='@'+s;

    int l=0,r=0;
    s[1]='(';
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='(')l++;
        if(s[i]==')')r++;
        if(s[i]=='_')
        {
            if(l>r)s[i]=')',r++;
            else s[i]='(',l++;
        }
    }
    int ans=0;
    stack<int>k;
    for(int i=1;i<=n;i++)
        if(s[i]=='(')k.push(i);
        else
        {
            int t=k.top(); k.pop();
            ans+=i-t;
        }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}