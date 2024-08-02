#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
        x-=a;
        if(x>0)c-=x;
        if(c<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        y-=b;
        if(y>0)c-=y;
        if(c<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl; 
    }

    return 0;
}