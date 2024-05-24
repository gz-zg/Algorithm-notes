#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int n;cin>>n;
    n=2*n+1;
    int k=1;
    while(n--)
    {
        cout<<k;
        k^=1;
    }
    return 0;
}