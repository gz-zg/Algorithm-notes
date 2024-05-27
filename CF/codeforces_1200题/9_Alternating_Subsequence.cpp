//写错了啊->题目问的是子序列，而不是连续子序列

//首先，我们通过包含数组中符号相同的数字来提取最大值。例如，如果数组是 [1,1,2,−1,−5,2,1,−3]
//那么这些段就是[1,1,2],[−1,−5],[2,1],[−3]
//我们可以用任何类似于 "两个指针 "的算法来计算。
//这些段的数量是交替子序列的最大可能长度，因为我们只能从每个块中提取一个元素。
//由于我们想要最大化总和，因此需要从每个区块中提取最大的元素。
// 时间复杂度： O(n)
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];
int st[N];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)st[i]=-1;
        else st[i]=1;
    }

    LL ans=0;
    for(int i=1;i<=n;i++)
    {
        int j=i;
        int tmp=a[j];
        while(j+1<=n && st[j+1]==st[i])
        {
            j++;
            tmp=max(tmp,a[j]);
        }
        ans+=tmp;
        i=j;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}