//这题就是推公式->推出在集合中的元素的通式，即->《a^c1 + c2 * b》
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n,a,b; scanf("%lld %lld %lld",&n,&a,&b);
    if(a==1)
    {
        if((n-1)%b==0)cout<<"Yes"<<endl;//太他妈坑了，这里一定要写(n-1)%b==0而不能写n%b==1
        else cout<<"No"<<endl;          //因为a==1的时候b也可能==1
    }
    else
    {
        int t = 1;
        while(t<=n)
        {
            if((n-t)%b==0){cout<<"Yes"<<endl;return;}
            t*=a;
        }
        cout<<"No"<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}