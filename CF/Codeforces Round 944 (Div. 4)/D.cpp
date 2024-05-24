#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    int s0=0, s1=0;
    for(char i:s)
        if(i=='0')s0++;
        else s1++;
    if(s0==0 || s1==0)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        bool sign=true;
        for(int i=0;i<s0;i++)
            if(s[i]=='1')
                sign=false;

        if(sign)
        {
            cout<<1<<endl;
            return;
        }
        else
        {
            int ans=0; bool t = false;
            for(int i=1;i<s.size();i++)
            {
                if(s[i]==s[i-1])continue;
                else ans++; 
            }
            ans++;
            for(int i=0;i<s.size()-1;i++)
                if(s[i]=='0' && s[i+1]=='1')
                {
                    t=true;
                    break;
                }
            
            if(t)cout<<ans-1<<endl;
            else cout<<ans<<endl;
        }
    }

}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}