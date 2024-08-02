/*
    两个要求：
    ①：s的周期要为k,因此先对s进行一波处理，
    使得相隔为k的一组字符如果为1 1 ? ?或0 0 ? ?的话，就必须变成1 1 1 1和0 0 0 0
    如果为1 0 ? ?的话，就直接输出NO
    如果为? ? ? ?的话，先不管
    ②：每个周期内1和0的数量要相等
    只需要对第一个周期(即1~k这k个字符)判断一下是否《n1>k/2 || n0>k/2》就可以了
*/
#include <bits/stdc++.h>
using namespace std;

int n,k;
string s;

void solve()
{
    cin>>n>>k;
    cin>>s; s='@'+s;
    
    for(int i=1;i<=k;i++)
    {
        char pre='@';    
        for(int j=i;j<=n;j+=k)
            if(s[j]=='?')continue;
            else
            {
                if(pre=='@')pre=s[j];
                else
                {
                    if(s[j]!=pre)
                    {
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        if(pre!='@')
            for(int j=i;j<=n;j+=k)
                s[j]=pre;
    }
    
    int n0=0,n1=0;
    for(int i=1;i<=k;i++)
        if(s[i]=='0')n0++;
        else if(s[i]=='1')n1++;
    if(n1>k/2 || n0>k/2)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}