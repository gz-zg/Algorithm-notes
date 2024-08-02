//太牛逼了->优先队列+反悔贪心
#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[2010];

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    
    priority_queue<int>dui;
    int ans=0,hp=0;
    for(int i=1;i<=n;i++)
    {
        hp+=a[i];
        ans++;
        if(a[i]<0)dui.push(-a[i]);
        if(hp<0)//如果在喝下当前这瓶药后死了的话，就反悔一次前面喝的一次毒药
        {       //（贪心的反悔最毒的那一瓶，这样之后就能喝更多瓶的毒药）
            hp+=dui.top();
            dui.pop();
            ans--;
        }
    }
    cout<<ans<<endl;

    return 0;
}