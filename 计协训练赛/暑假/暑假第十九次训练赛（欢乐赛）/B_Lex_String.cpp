#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m,k;
string a,b;

void solve()
{
    cin>>n>>m>>k;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    string c;
    int cnta=0,cntb=0;
    while(a.size()>=1 && b.size()>=1)
    {   
        if((a[0]<b[0]&&cnta<k) || cntb==k)
        {
            c+=a[0];
            a=a.substr(1);
            cnta++;
            cntb=0;
        }
        else 
        {
            c+=b[0];
            b=b.substr(1);
            cntb++;
            cnta=0;
        }
    }
    cout<<c<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}