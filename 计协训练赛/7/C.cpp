#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int solve()
{
    string s; cin>>s;
    if(s.size()==1 || s[0]=='0' || s.back()=='1')return 1;
    else
    {
        int h0=0,h1=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0')h0++;
            if(s[i]=='1')h1++;
        }

        int q0=0,q1=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(h1==0 && q0==0)ans++;
            if(i==s.size()-1)return ans;
            if(s[i]=='0')q0++;
            if(s[i]=='1')q1++;
            if(s[i+1]=='0')h0--;
            if(s[i+1]=='1')h1--;
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }

    return 0;
}