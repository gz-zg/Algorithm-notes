/*
做法一:暴力枚举所有前缀,然后复制它,直到长度大于 k ,然后substr截取前k个字符

做法二:找到最优的前缀
怎么找呢？
遍历字符串s的第2~n个字符
①如果s[i]<s[1],说明i这个位置不能删除,要作为最优前缀的一部分
②如果s[i]>s[1],说明i这个位置一定不是最优前缀的一部分,就删去字符i及其后面所有的字符，结束循环
③最麻烦的情况是如果s[i]==s[1],
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
string s;

int check(int i)
{
    for(int l=2,r=i+1; l<=n&&r<=n; r++,l++)
        if(s[r]<s[l])return r;
        else if(s[r]>s[l])return 0;
    return 0;
}

void solve()
{
    cin>>n>>k>>s;
    s='@'+s;
    int loop=1;
    for(int i=2;i<=n;i++)
        if(s[i]<s[1])loop++;
        else if(s[i]==s[1])
        {
            int t = check(i);
            if(t==0)break;
            else
            {
                loop+=t-i+1;
                i=t;
            }
        }
        else break;
    s=s.substr(1,loop);
    for(int i=0;i<k;i++)cout<<s[i%s.size()];
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while(t--)solve();
    return 0;
}