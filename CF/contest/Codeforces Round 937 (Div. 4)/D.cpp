#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[31]={10,11,
        100,101,110,111,
        1000,1001,1010,1100,1011,1101,1110,1111,
        10000,10001,10010,10100,11000,10011,10101,11001,10110,11010,11100,10111,11011,11101,11110,11111,
        100000};

bool dfs(int x)
{
    if(x==1)return true;

    for(int i=0;i<=30;i++)
        if(x%a[i]==0)
            if(dfs(x/a[i]))return true;
    
    return false;
}

void solve()
{
    int n; cin>>n;
    if(dfs(n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}