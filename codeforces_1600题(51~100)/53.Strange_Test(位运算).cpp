/*
当 a < b 的时候:
让a,b相等的最大值应该为b-a
由于a|b >= b,所以异或操作顶多使用一次
异或情况相等本质就是二进制位的a与b此时的后缀相等,有了这个结论
我们就能知道要么是(a + 某个数) or b = b,要么是(b + 某个数) or a = (b + 某个数)
某个数的范围就是0~b-a,因为让其相等最大值就是b - a
当然也可能0~b-a中没有哪个数能使其 or 相等
那么答案就是b - a
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int a,b;

void solve()
{
    cin>>a>>b;
    if(a>b)cout<<a-b<<endl;
    else if(a==b)cout<<0<<endl;
    else
    {
        int ans=b-a;
        for(int i=0;i<=b-a-1;i++)
            if((a|(b+i))==b+i || ((a+i)|b)==b)
            {
                ans=min(ans,i+1);
                break;
            }
        cout<<ans<<endl;
    }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}