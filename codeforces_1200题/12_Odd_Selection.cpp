//主要观点:k个数之和只有在奇数个数都是奇数的情况下才可能是奇数。

//我们首先维护两个变量 ji 和 ou ，它们分别代表数组中奇数和偶数的个数。
//然后我们遍历我们可以选择的奇数个数，它们是 1,3,5,...直到min(ji,k)，看看 ou 是否为 ≥x−i
//其中 i 是我们选择的奇数个数。
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int ji=0, ou=0;
    int n,k; cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int tmp; scanf("%d",&tmp);
        if(tmp%2==1)ji++;
        else ou++;
    }
    for(int i=1;i<=ji && i<=k;i+=2)
        if(k-i<=ou)
        {
            cout<<"Yes"<<endl;
            return;
        }
    cout<<"No"<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}