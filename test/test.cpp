#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

signed main()
{
    tuple<int,int,int>a={1,2,3};
    for(int i=0;i<=2;i++)
        cout<<get<1>(a)<<endl;

    return 0;
}