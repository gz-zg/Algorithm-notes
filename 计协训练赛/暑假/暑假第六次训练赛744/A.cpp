#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    int a=0,b=0,c=0;
    for(char i:s)
        if(i=='A')a++;
        else if(i=='B')b++;
        else c++;

    if(b==a+c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;  
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}