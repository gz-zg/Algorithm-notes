#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL f10[10]={1};

int num(int x,int pos)  //求的是1~x中数字pos出现的次数  //当x==0时不管pos是什么，函数返回值都为0
{
    vector<int>sx;
    while(x)
    {
        sx.push_back(x%10);
        x/=10;
    }
    reverse(sx.begin(),sx.end());

    int ans=0;
    if(pos!=0)  //pos=1~9时：数位分三种情况①最高位②中间位③最低位
    {
        int len=sx.size();
        for(int i=0;i<len;i++)
        {
            int front=0,end=0;
            for(int j=0;j<i;j++)front=front*10+sx[j];
            for(int j=i+1;j<len;j++)end=end*10+sx[j];

            if(i>=1 && i<=len-2)
            {
                ans+=front*f10[len-1-i];
                if(pos<sx[i])ans+=f10[len-1-i];
                if(pos==sx[i])ans+=(end+1);
            }
            else if(i==0)
            {
                if(pos<sx[i])ans+=f10[len-1-i];
                if(pos==sx[i])ans+=(end+1);
            }
            else
            {
                ans+=front;
                if(pos<=sx[i])ans+=1;
            }
        }
        return ans;
    }
    else  //pos=0时：因为最高位不可能有0，所以数位分两种情况①中间位②最低位
    {
        int len=sx.size();
        for(int i=1;i<len;i++)
        {
            int front=0,end=0;
            for(int j=0;j<i;j++)front=front*10+sx[j];
            for(int j=i+1;j<len;j++)end=end*10+sx[j];   

            if(i<=len-2)
            {
                ans+=(front-1)*f10[len-1-i];
                if(pos<sx[i])ans+=f10[len-1-i];
                if(pos==sx[i])ans+=(end+1);
            }
            else
            {
                ans+=(front-1);
                if(pos<sx[i])ans+=1;
                if(pos==sx[i])ans+=1;
            }
        }
        return ans;
    }
}

int main()
{
    for(int i=1;i<=9;i++)f10[i]=f10[i-1]*10;
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        LL ans=0;
        for(int i=1;i<=9;i++)ans+=num(n,i)*(LL)i;
        cout<<ans<<endl;
    }

    return 0;
}