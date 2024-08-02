//前缀和+贪心
/*
解题思路:很明显的前缀和问题。为什么呢？
因为我们探寻的是子序列，而子序列类型是有很多的，如果我们用前缀和自然会省去很多麻烦。
那么我们接下来来深究这个问题，我们如果发现某个子序列和为0之后我们在这个数的左边相邻处进行添加操作
这会使得这个数前面的数+这个数后面的数不可能为0了，因为我可以加个无穷大或者负无穷，这自然可以达成目的，所以这里是可以跳过的。 
所以我们可以在线统计前缀和，通过map记录前缀和是否出现过，如果出现同样的前缀和，那么这两个前缀和的差集自然是为0的。
所以这里我们进行操作之后这个前缀里是不可能再对后面的进行影响了，所以我们可以更新累加值。同时也要清空map容器避免对之后的造成影响。
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a[200010];

signed main()
{
    cin>>n;

    int ans=0;
    map<int,bool>mp; mp[0]=true;
    for(int i=1;i<=n;i++)
    {
        int x; scanf("%lld",&x);
        a[i]=x; a[i]+=a[i-1];
        if(mp[a[i]]==true)
        {
            ans++;
            mp.clear(); mp[0]=true;
            a[i]=x;
            mp[a[i]]=true;
        }
        else mp[a[i]]=true;
    }
    cout<<ans<<endl;

    return 0;
}