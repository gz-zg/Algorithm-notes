//真的是使用两个栈！！！我真是天才
//遍历整个字符串, 如果当前位是1, 则它一定需要放在某个以0结尾的字串后, 否则就要创建新的子序列（当前位是0同理）. 
//我们不妨用两个栈分别存放以0和以1结尾的子序列末尾元素的下标, 每次查看对应的队列是否为空即可.
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    string s; cin>>s; s='@'+s;
    
    stack<int>a0,a1;
    int st[200010]={0};
    int idx=1;
    for(int i=1;i<=n;i++)
        if(s[i]=='1')
        {
            if(a0.size()==0)a1.push(i),st[i]=idx++;
            else
            {
                st[i]=st[a0.top()];
                a0.pop();
                a1.push(i);
            }
        }
        else
        {
            if(a1.size()==0)a0.push(i),st[i]=idx++;
            else
            {
                st[i]=st[a1.top()];
                a1.pop();
                a0.push(i);
            }
        }
    cout<<idx-1<<endl;
    for(int i=1;i<=n;i++)printf("%d ",st[i]);
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}