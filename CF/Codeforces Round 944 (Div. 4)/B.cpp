#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s;
    if(s.size()==1)cout<<"NO"<<endl;
    else
    {
        for(int i=1;i<s.size();i++)
            if(s[i]!=s[0])
            {
               swap(s[i],s[0]);
               cout<<"YES"<<endl;
               cout<<s<<endl;
               return;
            }
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}