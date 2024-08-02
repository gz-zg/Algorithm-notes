#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a,b,c; cin>>a>>b>>c;
    int x=(int)pow(10,a-1);
    int y=(int)pow(10,b-1);
    if(a<=b)
    {
        string s=to_string(x);
        for(int i=s.size()-1-c+1;i>=0;i--)s[i]='1';
        cout<<s<<" "<<y<<endl;
    }
    else
    {
        string s=to_string(y);
        for(int i=s.size()-1-c+1;i>=0;i--)s[i]='1';
        cout<<x<<" "<<s<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}