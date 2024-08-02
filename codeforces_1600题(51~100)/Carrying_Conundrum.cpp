/*
首先可以发现一个性质，奇数位的数只会进位到奇数位,偶数位同理。
我们考虑把奇数位的数和偶数位的数单独考虑。
显然，对于一个数n分为2个非负整数之和只有n+1种方案。
记奇数位上的数为x,偶数位上的数为y
那么最终的答案即为(x+1)×(y+1)−2。
由于不能取0所以最终的答案还要减去2
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

string n;

void solve()
{
    cin>>n;
    int sign=1,ji=0,ou=0;
    for(int i=0;i<n.size();i++)
    {
        if(sign)ji=ji*10+(n[i]-'0');
        else ou=ou*10+(n[i]-'0');
        sign^=1;
    }
    cout<<(ji+1)*(ou+1)-2<<endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}