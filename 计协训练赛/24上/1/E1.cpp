#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    LL a,b,c,d; cin>>a>>b>>c>>d;

    vector<LL>yin;
    for(int i=1;i<=(a*b)/i;i++)
        if(a*b%i==0)
        {
            yin.push_back(i);
            if(i!=a*b/i)yin.push_back(a*b/i);
        }
    
    for(LL x:yin)
    {
        LL y = a*b/x;
        x=(a/x+1)*x;  //求出x的大于a的最小的倍数
        y=(b/y+1)*y;  //求出y的大于b的最小的倍数
        if(x<=c && y<=d)
        {
            cout<<x<<" "<<y<<endl;
            return;
        }
    }
    cout<<-1<<" "<<-1<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}