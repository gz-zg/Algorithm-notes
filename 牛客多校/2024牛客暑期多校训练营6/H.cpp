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
    cin>>s;
    n=s.size();
    s='@'+s;
    
    vector<int>a5={0},au;
    for(int i=1;i<=n;i++)
        if(s[i]=='5' || s[i]=='U')
            a5.push_back(i);
    a5.push_back(n+1);
    for(int i=1;i<=n;i++)
        if(s[i]=='U' || s[i]=='5')
            au.push_back(i);
    bool sign=true;
    for(int i=1;i<a5.size();i++)
        if(a5[i]-a5[i-1]>90)sign=false;
    for(int i=1;i<au.size();i++)
    {
        int cnt=0;
        if(s[au[i]]=='U')cnt++;
        if(s[au[i-1]]=='U')cnt++;
        if(cnt==0)
        {
            sign=false;
        }
    }
    int n3=0;
    for(int r=1,l=1;r<=n;r++)
    {
        if(s[r]=='3')n3++;
        if(r-l+1==11)
        {
            if(s[l]=='3')n3--;
            l++;
        }
        if(r-l+1==10)
        {
            if(n3==10)sign=false;
        }
    }
    if(sign)cout<<"valid"<<endl;
    else cout<<"invalid"<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}