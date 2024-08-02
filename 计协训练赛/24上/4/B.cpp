#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>mp;
        int ans=0;
        for(char i:s)
        {
            mp[i]++;
            if(mp[i]==1)ans+=2;
            else ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}