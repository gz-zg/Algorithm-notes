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
    int idx=1;
    vector<int>ans(n+10);
    stack<int>s0,s1;
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='1')
        {
            if(s0.size()==0)
            {
                ans[i]=idx;
                s1.push(idx);
                idx++;
            }
            else
            {
                int t=s0.top(); s0.pop();
                ans[i]=t;
                s1.push(t);
            }
        }
        else
        {
            if(s1.size()==0)
            {
                ans[i]=idx;
                s0.push(idx);
                idx++;
            }
            else
            {
                int t=s1.top(); s1.pop();
                ans[i]=t;
                s0.push(t);
            }
        }
    }
    cout<<idx-1<<endl;
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}