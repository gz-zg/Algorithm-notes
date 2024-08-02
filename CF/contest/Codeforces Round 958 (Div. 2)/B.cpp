#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    if(n==1)
    {
        if(s[0]=='1')cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else
    {
        int n1=0,n0=0;
        for(int i=0;i<n;i++)
            if(s[i]=='1')n1++;
            else
            {
                n0++;
                int j=i;
                while(j+1<n && s[j+1]=='0')j++;
                i=j;
            }
        if(n1>n0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}