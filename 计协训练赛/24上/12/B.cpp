#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int a,b,c; cin>>a>>b>>c;
    int c1=b-a; 
    int c2=c-b;
    if(c1==c2)cout<<"YES"<<endl;
    else
    {
        if(c1>c2)
        {
            if( (c1-c2)%a==0 || (c1-c2)%c==0 )cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if( (c2-c1)%b==0 && (c2-c1)/b%2==0 )cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}