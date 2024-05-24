#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define int long long
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;
int n = 1e9;
LL C(LL a,LL b){
    LL res=1;
    for(LL i=a,j=1;j<=b;i--,j++){
        res=res*i/j;
        if(res>n)	// fixed
            return res;
    }
	return res;
}
signed main()
{
    C(9, 3);

    return 0;
}