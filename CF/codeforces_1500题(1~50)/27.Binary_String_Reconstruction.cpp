//首先，让我们用1替换字符串ans中的所有元素。
//现在，让我们考虑s的所有索引,如果s[i]=0,那么ans[i-x]必须等于0(如果存在的话),
//而ans[i+x]也必须等于0(如果存在的话),因此我们将所有这些元素替换为0。

//之后，让我们对字符串ans执行语句中描述的过程。如果得到字符串s,那么我们可以打印出ans作为答案，否则答案就是-1。
//或者可以->因为ans一定可以正确的推出s中的0,因此只要再检查一下s中的1是否都能正确的通过ans推出就行了
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin>>s; int len=s.size();
    int x; cin>>x;
    
    string ans(len,'1');
    for(int i=0;i<len;i++)
        if(s[i]=='0')
        {
            if(i-x>=0)ans[i-x]='0';
            if(i+x<len)ans[i+x]='0';
        }

    for(int i=0;i<len;i++)
        if(s[i]=='1')
            if((i-x>=0&&ans[i-x]=='1') || (i+x<len&&ans[i+x]=='1'))continue;
            else
            {
                cout<<-1<<endl;
                return;
            }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}