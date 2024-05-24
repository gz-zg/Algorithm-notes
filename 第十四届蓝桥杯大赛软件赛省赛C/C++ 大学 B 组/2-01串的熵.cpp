#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    for(int i=0;i<=23333333/2;i++)
    {
        int j=23333333-i;
        double sum=0;
        double ii=i/23333333.0,jj=j/23333333.0;
        sum+=i*ii*log2(ii);
        sum+=j*jj*log2(jj);
        sum=-sum;
        if(fabs(sum-11625907.5798)<=1e-2)
        {
            cout<<i<<endl;
            return;
        }
    }
}

int main()
{

    solve();

    return 0;
}