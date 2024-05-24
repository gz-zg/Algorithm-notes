#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve() //其实能走的次数从一开始就已经固定了，即min(0的数量，1的数量)次
{
    string s; cin>>s;
    int s1=0,s0=0;
    for(char i:s)
        if(i=='1')s1++;
        else s0++;
    int cnt=min(s1,s0);
    if(cnt&1)cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();

    return 0;
}