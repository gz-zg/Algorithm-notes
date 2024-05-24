#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

bool sign[N];

int main()
{
    int num; cin>>num;
    int idx,n,m;
    while(cin>>idx)
    {
        if(sign[idx]==false)sign[idx]=true;
        else n=idx;
    }
    idx=1;
    while(sign[idx]==false)idx++;
    while(sign[idx]==true)idx++;
    m=idx;
    
    cout<<m<<" "<<n;

    return 0;
}